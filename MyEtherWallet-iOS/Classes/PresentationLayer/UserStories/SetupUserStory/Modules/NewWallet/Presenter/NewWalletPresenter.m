//
//  NewWalletPresenter.m
//
//
// 28/04/2018.
//
//

#import "NewWalletPresenter.h"

#import "NewWalletViewInput.h"
#import "NewWalletInteractorInput.h"
#import "NewWalletRouterInput.h"

@implementation NewWalletPresenter {
  BOOL _forgotPassword;
}

#pragma mark - NewWalletModuleInput

- (void)configureModuleWithPassword:(NSString *)password words:(NSArray<NSString *> *)words forgotPassword:(BOOL)forgotPassword {
  _forgotPassword = forgotPassword;
  [self.interactor createNewWalletWithPassword:password words:words];
}

#pragma mark - NewWalletViewOutput

- (void)didTriggerViewReadyEvent {
	[self.view setupInitialState];
}

- (void)startUsingAction {
  if (_forgotPassword) {
    [self.router unwindToWallet];
  } else {
    [self.router unwindToStart];
  }
}

#pragma mark - NewWalletInteractorOutput

@end
