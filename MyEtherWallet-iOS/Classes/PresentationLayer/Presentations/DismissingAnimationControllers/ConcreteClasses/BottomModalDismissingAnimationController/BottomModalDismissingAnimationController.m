//
//  BottomModalDismissingAnimationController.m
//

#import "BottomModalDismissingAnimationController.h"

@implementation BottomModalDismissingAnimationController

#pragma mark - UIViewControllerAnimatedTransitioning

- (NSTimeInterval)transitionDuration:(__unused id <UIViewControllerContextTransitioning>)transitionContext {
  return 0.3;
}

- (void)animateTransition:(id <UIViewControllerContextTransitioning>)transitionContext {
  UIView *dismissedView = [transitionContext viewControllerForKey:UITransitionContextFromViewControllerKey].view;
  UIViewController *toViewController = [transitionContext viewControllerForKey:UITransitionContextToViewControllerKey];
  
  UIView *containerView = [transitionContext containerView];
  UIView *dismissedViewSnapshot = [dismissedView snapshotViewAfterScreenUpdates:(dismissedView.window == nil)];
  [containerView addSubview:dismissedViewSnapshot];
  
  CGRect frame = dismissedView.frame;
  dismissedViewSnapshot.frame = frame;
  dismissedView.hidden = YES;
  
  UIViewAnimationOptions options = UIViewAnimationOptionBeginFromCurrentState | UIViewAnimationOptionCurveEaseIn;
  
  [UIView animateWithDuration:[self transitionDuration:transitionContext]
                        delay:0.0
                      options:options
                   animations:^{
                     dismissedViewSnapshot.transform = CGAffineTransformMakeTranslation(0.0, CGRectGetHeight(dismissedView.bounds));
                   } completion:^(__unused BOOL finished) {
                     [transitionContext completeTransition:!transitionContext.transitionWasCancelled];
                     [toViewController setNeedsStatusBarAppearanceUpdate];
                   }];
}

@end
