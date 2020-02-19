//
//  BackupConfirmationRouter.m
//

@import ViperMcFlurryX;

#import "BackupConfirmationRouter.h"

#import "BackupDoneModuleInput.h"

static NSString *const kBackupConfirmationToBackupDoneSegueIdentifier = @"BackupConfirmationToBackupDoneSegueIdentifier";

@implementation BackupConfirmationRouter

#pragma mark - BackupConfirmationRouterInput

- (void) openDone {
  [[self.transitionHandler openModuleUsingSegue:kBackupConfirmationToBackupDoneSegueIdentifier] thenChainUsingBlock:^id<RamblerViperModuleOutput>(id<BackupDoneModuleInput> moduleInput) {
    [moduleInput configureModule];
    return nil;
  }];
}

@end
