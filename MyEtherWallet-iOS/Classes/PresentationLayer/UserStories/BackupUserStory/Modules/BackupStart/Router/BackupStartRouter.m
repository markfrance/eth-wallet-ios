//
//  BackupStartRouter.m
//

@import ViperMcFlurryX;

#import "BackupStartRouter.h"

#import "ContextPasswordModuleInput.h"
#import "ContextPasswordModuleOutput.h"
#import "BackupWordsModuleInput.h"

static NSString *const kBackupStartToContextPasswordSegueIdentifier = @"BackupStartToContextPasswordSegueIdentifier";
static NSString *const kBackupStartToBackupWordsSegueIdentifier = @"BackupStartToBackupWordsSegueIdentifier";

@implementation BackupStartRouter

#pragma mark - BackupStartRouterInput

- (void) openContextPasswordWithOutput:(id <ContextPasswordModuleOutput>)output account:(AccountPlainObject *)account {
  [[self.transitionHandler openModuleUsingSegue:kBackupStartToContextPasswordSegueIdentifier] thenChainUsingBlock:^id<ContextPasswordModuleOutput>(id<ContextPasswordModuleInput> moduleInput) {
    [moduleInput configureModuleWithAccount:account type:ContextPasswordTypeBackup];
    return output;
  }];
}

- (void) openWordsWithMnemonics:(NSArray<NSString *> *)mnemonics account:(AccountPlainObject *)account {
  [[self.transitionHandler openModuleUsingSegue:kBackupStartToBackupWordsSegueIdentifier] thenChainUsingBlock:^id<RamblerViperModuleOutput>(id<BackupWordsModuleInput> moduleInput) {
    [moduleInput configureModuleWithMnemonics:mnemonics account:account];
    return nil;
  }];
}

@end
