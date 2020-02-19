//
//  ConfirmationNavigationRouter.m
//
//
// 17/07/2018.
//
//

@import ViperMcFlurryX;

#import "ConfirmationNavigationRouter.h"

@implementation ConfirmationNavigationRouter

#pragma mark - ConfirmationNavigationRouterInput

- (void) closeWithCompletion:(ModuleCloseCompletionBlock)completion {
  [self.transitionHandler closeModulesUntil:self.transitionHandler.parentTransitionHandler animated:YES completion:completion];
}

@end
