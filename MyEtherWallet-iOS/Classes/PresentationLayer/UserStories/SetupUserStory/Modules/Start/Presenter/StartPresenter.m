//
//  StartPresenter.m
//
//
// 14/04/2018.
//
//

#import "StartPresenter.h"

#import "StartViewInput.h"
#import "StartInteractorInput.h"
#import "StartRouterInput.h"

@implementation StartPresenter {
  BOOL _shouldOpenWallet;
}

#pragma mark - StartModuleInput

- (void) configureModule {
}

- (void) configurateForCreatedWallet {
  _shouldOpenWallet = YES;
}

#pragma mark - StartViewOutput

- (void) didTriggerViewReadyEvent {
	[self.view setupInitialState];
}

- (void) didTriggerViewWillAppearEvent {
  if (_shouldOpenWallet) {
    _shouldOpenWallet = NO;
    [self.router openWalletAnimated:NO];
  }
}

- (void) createNewWalletAction {
  [self.router openCreateNewWallet];
}

- (void) restoreWallet {
  [self.router openRestoreWallet];
}

#pragma mark - StartInteractorOutput

@end
