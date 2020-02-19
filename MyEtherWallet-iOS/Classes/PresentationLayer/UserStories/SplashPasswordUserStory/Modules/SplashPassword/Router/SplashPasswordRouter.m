//
//  SplashPasswordRouter.m
//

@import ViperMcFlurryX;

#import "SplashPasswordRouter.h"
#import "ForgotPasswordModuleInput.h"
#import "HomeModuleInput.h"
#import "StartModuleInput.h"

static NSString *const kSplashPasswordToForgotPasswordSegueIdentifier = @"SplashPasswordToForgotPasswordSegueIdentifier";
static NSString *const kSplashPasswordToHomeUnwindSegueIdentifier     = @"SplashPasswordToHomeSegueIdentifier";
static NSString *const kForgotPasswordToStartUnwindSegueIdentifier   = @"ForgotPasswordToStartUnwindSegueIdentifier";

@implementation SplashPasswordRouter

#pragma mark - SplashPasswordRouterInput

- (void) close {
  [self.transitionHandler closeCurrentModule:YES];
}

- (void) unwindToHome {
  [[self.transitionHandler openModuleUsingSegue:kSplashPasswordToHomeUnwindSegueIdentifier] thenChainUsingBlock:^id<RamblerViperModuleOutput>(id<HomeModuleInput> moduleInput) {
    [moduleInput takeControlAfterLaunch];
    return nil;
  }];
}

- (void) unwindToStart {
  [[self.transitionHandler openModuleUsingSegue:kForgotPasswordToStartUnwindSegueIdentifier] thenChainUsingBlock:^id<RamblerViperModuleOutput>(id<StartModuleInput> moduleInput) {
    [moduleInput configureModule];
    return nil;
  }];
}

- (void) openForgotPasswordWithAccount:(AccountPlainObject *)account {
  [[self.transitionHandler openModuleUsingSegue:kSplashPasswordToForgotPasswordSegueIdentifier] thenChainUsingBlock:^id<RamblerViperModuleOutput>(id<ForgotPasswordModuleInput> moduleInput) {
    [moduleInput configureModuleWithAccount:account];
    return nil;
  }];
}


@end
