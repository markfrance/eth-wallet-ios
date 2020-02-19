//
//  AboutRouter.m
//
//
// 25/07/2018.
//
//

@import ViperMcFlurryX;

#import "AboutRouter.h"

@implementation AboutRouter

#pragma mark - AboutRouterInput

- (void) close {
  [self.transitionHandler closeCurrentModule:YES];
}

@end
