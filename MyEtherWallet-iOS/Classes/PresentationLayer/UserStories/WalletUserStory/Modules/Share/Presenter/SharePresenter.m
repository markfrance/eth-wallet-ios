//
//  SharePresenter.m
//
//
// 11/10/2018.
//
//

#import "SharePresenter.h"

#import "ShareViewInput.h"
#import "ShareInteractorInput.h"
#import "ShareRouterInput.h"

#import "UIScreen+AnimateBrightness.h"

static NSTimeInterval const kSharePresenterBrightnessFastAnimationDuration  = 0.2;
static NSTimeInterval const kSharePresenterBrightnessAnimationDuration      = 0.4;

@implementation SharePresenter {
  CGFloat _originalBrightness;
  BOOL _willEnterForeground;
  BOOL _willDisappear;
}

#pragma mark - ShareModuleInput

- (void) configureModuleWithMasterToken:(MasterTokenPlainObject *)masterToken {
  [self.interactor configureWithMasterToken:masterToken];
}

- (void)didTriggerViewWillAppearEvent {
  _originalBrightness = [[UIScreen mainScreen] animateBrightnessTo:1.0 withDuration:kSharePresenterBrightnessAnimationDuration];
  [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(_applicationDidBecomeActive:) name:UIApplicationDidBecomeActiveNotification object:nil];
  [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(_applicationWillEnterForeground:) name:UIApplicationWillEnterForegroundNotification object:nil];
  [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(_applicationWillResignActive:) name:UIApplicationWillResignActiveNotification object:nil];
}

- (void)didTriggerViewWillDisappearEvent {
  _willDisappear = YES;
  [[UIScreen mainScreen] animateBrightnessTo:_originalBrightness withDuration:kSharePresenterBrightnessAnimationDuration];
  [[NSNotificationCenter defaultCenter] removeObserver:self];
}

#pragma mark - ShareViewOutput

- (void) didTriggerViewReadyEvent {
  NSString *address = [self.interactor obtainPublicAddress];
  UIImage *qrCode = [self.interactor obtainQRCode];
  BlockchainNetworkType network = [self.interactor obtainNetworkType];
  [self.view setupInitialStateWithAddress:address qrCode:qrCode network:network];
}

- (void) closeAction {
  [self.router close];
}

- (void) copyAction {
  [self.interactor copyAddress];
  [self.view showToastAddressCopied];
}

- (void) shareAction {
  NSArray *items = [self.interactor shareActivityItems];
  [self.view presentShareWithItems:items];
}

#pragma mark - ShareInteractorOutput

#pragma mark - Private

- (void) _applicationDidBecomeActive:(__unused NSNotification *)notification {
  if (!_willEnterForeground && !_willDisappear) {
    _originalBrightness = [[UIScreen mainScreen] animateBrightnessTo:1.0 withDuration:kSharePresenterBrightnessAnimationDuration];
  } else {
    _willEnterForeground = NO;
  }
}

- (void) _applicationWillEnterForeground:(__unused NSNotification *)notification {
  _willEnterForeground = YES;
  _originalBrightness = [[UIScreen mainScreen] animateBrightnessTo:1.0 withDuration:kSharePresenterBrightnessAnimationDuration];
}

- (void) _applicationWillResignActive:(__unused NSNotification *)notification {
  [[UIScreen mainScreen] animateBrightnessTo:_originalBrightness withDuration:kSharePresenterBrightnessFastAnimationDuration];
}

@end
