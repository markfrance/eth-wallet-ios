//
//  ContextPasswordPresenter.m
//
//
// 11/09/2018.
//
//

#import "ContextPasswordPresenter.h"

#import "ContextPasswordViewInput.h"
#import "ContextPasswordInteractorInput.h"
#import "ContextPasswordRouterInput.h"
#import "ContextPasswordModuleOutput.h"

@implementation ContextPasswordPresenter {
  ContextPasswordType _type;
}

#pragma mark - ContextPasswordModuleInput

- (void) configureModuleWithAccount:(AccountPlainObject *)account type:(ContextPasswordType)type {
  _type = type;
  [self.interactor configurateWithAccount:account];
}

#pragma mark - ContextPasswordViewOutput

- (void) didTriggerViewReadyEvent {
  NSString *title = nil;
  switch (_type) {
    case ContextPasswordTypeBackup: {
      title = NSLocalizedString(@"Enter password to start", @"Context input password. Backup");
      break;
    }
    case ContextPasswordTypeMessage: {
      title = NSLocalizedString(@"Enter password to sign", @"Context input password. Sign message");
      break;
    }
    case ContextPasswordTypeTransaction: {
      title = NSLocalizedString(@"Enter password to confirm", @"Context input password. Sign transaction");
      break;
    }
    case ContextPasswordTypeGenerate: {
      title = NSLocalizedString(@"Enter password to generate", @"Context input password. Generate new private key");
      break;
    }
    case ContextPasswordTypeViewBackup: {
      title = NSLocalizedString(@"Enter password to view", @"Context input password. View backup phrase");
      break;
    }
      
    default:
      break;
  }
  [self.view setupInitialStateWithTitle:title];
  if ([self.interactor isPasswordLocked]) {
    [self.view lockPasswordField];
  }
}

- (void) cancelAction {
  [self.view prepareForDismiss];
  [self.router close:YES];
}

- (void) resignAction {
  [self.view prepareForDismiss];
  [self.router close:NO];
}

- (void) doneActionWithPassword:(NSString *)password {
  [self.interactor checkPassword:password];
}

#pragma mark - ContextPasswordInteractorOutput

- (void) correctPassword:(NSString *)password {
  [self.view prepareForDismiss];
  [self.moduleOutput passwordDidEntered:password];
  [self.router close:YES];
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
