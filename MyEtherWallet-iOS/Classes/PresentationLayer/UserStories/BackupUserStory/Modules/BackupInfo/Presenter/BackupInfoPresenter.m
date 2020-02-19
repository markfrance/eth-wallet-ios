//
//  BackupInfoPresenter.m
//

#import "BackupInfoPresenter.h"

#import "BackupInfoViewInput.h"
#import "BackupInfoInteractorInput.h"
#import "BackupInfoRouterInput.h"

@implementation BackupInfoPresenter

#pragma mark - BackupInfoModuleInput

- (void) configureModuleWithAccount:(AccountPlainObject *)account {
  [self.interactor configurateWithAccount:account];
}

#pragma mark - BackupInfoViewOutput

- (void) didTriggerViewReadyEvent {
	[self.view setupInitialState];
}

- (void)startAction {
  AccountPlainObject *account = [self.interactor obtainAccount];
  [self.router openBackupStartWithAccount:account];
}

- (void)cancelAction {
  [self.router close];
}

#pragma mark - BackupInfoInteractorOutput

@end
