//
//  ShareRouter.m
//
//
// 11/10/2018.
//
//

@import ViperMcFlurryX;

#import "ShareRouter.h"

@implementation ShareRouter

#pragma mark - ShareRouterInput

- (void) close {
  [self.transitionHandler closeCurrentModule:YES];
}

@end
