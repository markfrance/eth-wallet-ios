//
//  SplashPasswordPresenter.m
//

#import "SplashPasswordPresenter.h"

#import "SplashPasswordViewInput.h"
#import "SplashPasswordInteractorInput.h"
#import "SplashPasswordRouterInput.h"

#import "SplashPasswordModuleOutput.h"

@implementation SplashPasswordPresenter {
  BOOL _launchState;
  BOOL _control;
}

#pragma mark - SplashPasswordModuleInput

- (void) configureModuleWithAccount:(AccountPlainObject *)account autoControl:(BOOL)autoControl {
  _control = autoControl;
  [self.interactor configurateWithAccount:account];
}

- (void) takeControlAfterLaunch {
  _launchState = YES;
  _control = YES;
  [self.view becomePasswordInputActive];
}

#pragma mark - SplashPasswordViewOutput

- (void) didTriggerViewReadyEvent {
	[self.view setupInitialStateWithAutoControl:_control];
  if ([self.interactor isPasswordLocked]) {
    [self.view lockPasswordField];
  }
}

- (void) doneActionWithPassword:(NSString *)password {
  [self.interactor checkPassword:password];
}

- (void) forgotPasswordAction {
  AccountPlainObject *account = [self.interactor obtainAccount];
  [self.router openForgotPasswordWithAccount:account];
}

- (void) resetWalletAction {
  [self.view presentResetConfirmation];
}

- (void) resetWalletConfirmedAction {
  [self.interactor resetWallet];
  [self.router unwindToStart];
}


#pragma mark - SplashPasswordInteractorOutput

- (void) correctPassword:(NSString *)password {
  [self.moduleOutput passwordDidEntered:password];
  if (_launchState) {
    [self.router unwindToHome];
  } else {
    [self.router close];
  }
}

- (void) incorrectPassword {
  if ([self.interactor isPasswordLocked]) {
    [self.view lockPasswordField];
  }
  [self.view shakeInput];
}

- (void) passwordDidUnlocked {
  [self.view unlockPasswordField];
}

- (void) passwordWillBeUnlockedIn:(NSTimeInterval)unlockIn {
  [self.view updateLockWithTimeInterval:unlockIn];
}


@end
