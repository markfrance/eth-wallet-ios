//
//  ForgotPasswordPresenter.m
//

#import "ForgotPasswordPresenter.h"

#import "ForgotPasswordViewInput.h"
#import "ForgotPasswordInteractorInput.h"
#import "ForgotPasswordRouterInput.h"

@implementation ForgotPasswordPresenter

#pragma mark - ForgotPasswordModuleInput

- (void) configureModuleWithAccount:(AccountPlainObject *)account {
  [self.interactor configurateWithAccount:account];
}

#pragma mark - ForgotPasswordViewOutput

- (void) didTriggerViewReadyEvent {
	[self.view setupInitialState];
}

- (void) resetWalletAction {
  [self.view presentResetConfirmation];
}

- (void) resetWalletConfirmedAction {
  [self.interactor resetWallet];
  [self.router unwindToStart];
}

#pragma mark - ForgotPasswordInteractorOutput

- (void)closeAction {
  [self.router close];
}

- (void)restoreAction {
  [self.router openRestore];
}

@end
