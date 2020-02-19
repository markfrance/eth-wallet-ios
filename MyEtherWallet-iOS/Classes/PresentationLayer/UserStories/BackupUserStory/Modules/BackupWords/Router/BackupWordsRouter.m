//
//  BackupWordsRouter.m
//

@import ViperMcFlurryX;

#import "BackupWordsRouter.h"

#import "BackupConfirmationModuleInput.h"

static NSString *const kBackupWordsToBackupConfirmationSegueIdentifier = @"BackupWordsToBackupConfirmationSegueIdentifier";

@implementation BackupWordsRouter

#pragma mark - BackupWordsRouterInput

- (void) close {
  [self.transitionHandler closeCurrentModule:YES];
}

- (void) openConfirmationWithMnemonics:(NSArray<NSString *> *)mnemonics account:(AccountPlainObject *)account {
  [[self.transitionHandler openModuleUsingSegue:kBackupWordsToBackupConfirmationSegueIdentifier] thenChainUsingBlock:^id<RamblerViperModuleOutput>(id<BackupConfirmationModuleInput> moduleInput) {
    [moduleInput configureModuleWithMnemonics:mnemonics account:account];
    return nil;
  }];
}

@end
