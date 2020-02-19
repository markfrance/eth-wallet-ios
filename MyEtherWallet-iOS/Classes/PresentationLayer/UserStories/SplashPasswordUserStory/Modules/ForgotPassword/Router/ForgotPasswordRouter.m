//
//  ForgotPasswordRouter.m
//

@import ViperMcFlurryX;

#import "ForgotPasswordRouter.h"

#import "RestoreOptionsModuleInput.h"
#import "StartModuleInput.h"

static NSString *const kForgotPasswordToRestoreOptionsSegueIdentifier = @"ForgotPasswordToRestoreOptionsSegueIdentifier";
static NSString *const kForgotPasswordToStartUnwindSegueIdentifier   = @"ForgotPasswordToStartUnwindSegueIdentifier";

@implementation ForgotPasswordRouter

#pragma mark - ForgotPasswordRouterInput

- (void) close {
  [self.transitionHandler closeCurrentModule:YES];
}

- (void) openRestore {
  [[self.transitionHandler openModuleUsingSegue:kForgotPasswordToRestoreOptionsSegueIdentifier] thenChainUsingBlock:^id<RamblerViperModuleOutput>(id<RestoreOptionsModuleInput> moduleInput) {
    [moduleInput configureModuleWhileForgotPassword:YES];
    return nil;
  }];
}

- (void) unwindToStart {
  [[self.transitionHandler openModuleUsingSegue:kForgotPasswordToStartUnwindSegueIdentifier] thenChainUsingBlock:^id<RamblerViperModuleOutput>(id<StartModuleInput> moduleInput) {
    [moduleInput configureModule];
    return nil;
  }];
}

@end
