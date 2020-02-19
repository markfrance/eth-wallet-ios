//
//  BackupDoneRouter.m
//

@import ViperMcFlurryX;

#import "BackupDoneRouter.h"


#import "HomeModuleInput.h"

static NSString *const kBackupDoneToHomeUnwindSegueIdentifier = @"BackupDoneToHomeUnwindSegueIdentifier";
static NSString *const kBackupDoneToInfoUnwindSegueIdentifier = @"BackupDoneToInfoUnwindSegueIdentifier";

@implementation BackupDoneRouter

#pragma mark - BackupDoneRouterInput

- (void)unwindToHome {

    [[self.transitionHandler openModuleUsingSegue:kBackupDoneToHomeUnwindSegueIdentifier] thenChainUsingBlock:^id<RamblerViperModuleOutput>(id<HomeModuleInput> moduleInput) {
      [moduleInput configureBackupStatus];
      return nil;
    }];
  
}

@end
