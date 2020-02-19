//
//  BackupWordsPresenter.m
//

#import "BackupWordsPresenter.h"

#import "BackupWordsViewInput.h"
#import "BackupWordsInteractorInput.h"
#import "BackupWordsRouterInput.h"

@implementation BackupWordsPresenter {
  BOOL _readOnlyMode;
}

#pragma mark - BackupWordsModuleInput

- (void) configureModuleWithMnemonics:(NSArray<NSString *> *)mnemonics {
  _readOnlyMode = YES;
  [self.interactor configurateWithMnemonics:mnemonics ofAccount:nil];
}

- (void) configureModuleWithMnemonics:(NSArray<NSString *> *)mnemonics account:(AccountPlainObject *)account {
  [self.interactor configurateWithMnemonics:mnemonics ofAccount:account];
}

#pragma mark - BackupWordsViewOutput

- (void) didTriggerViewReadyEvent {
  NSArray *mnemonics = [self.interactor recoveryMnemonicsWords];
  [self.view setupInitialStateWithWords:mnemonics readOnly:_readOnlyMode];
}

- (void) nextAction {
  AccountPlainObject *account = [self.interactor obtainAccount];
  NSArray *mnemonics = [self.interactor recoveryMnemonicsWords];
  [self.router openConfirmationWithMnemonics:mnemonics account:account];
}

- (void)closeAction {
  [self.router close];
}

- (void) didTriggerViewWillAppearEvent {
  [self.interactor enableSecurityProtection];
  [self.interactor subscribeToEvents];
}

- (void) didTriggerViewWillDisappearEvent {
  [self.interactor unsubscribeFromEvents];
  [self.interactor disableSecurityProtection];
}

#pragma mark - BackupWordsInteractorOutput

- (void) userDidTakeScreenshot {
  [self.view showScreenshotAlert];
}

@end
