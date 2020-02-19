//
//  ContextPasswordRouter.m

//

@import ViperMcFlurryX;

#import "ContextPasswordRouter.h"

@implementation ContextPasswordRouter

#pragma mark - ContextPasswordRouterInput

- (void) close:(BOOL)animated {
  [self.transitionHandler closeCurrentModule:animated];
}

@end
