//
//  FadeModalPresentingAnimationController.m
//

#import "FadeModalPresentingAnimationController.h"

@implementation FadeModalPresentingAnimationController

- (NSTimeInterval)transitionDuration:(__unused id <UIViewControllerContextTransitioning>)transitionContext {
  return 0.65;
}

- (void) animateTransition:(id <UIViewControllerContextTransitioning>)transitionContext {
  UIView *containerView = [transitionContext containerView];
  UIView *presentedView = [transitionContext viewControllerForKey:UITransitionContextToViewControllerKey].view;
  
  UIViewController *toViewController = [transitionContext viewControllerForKey:UITransitionContextToViewControllerKey];
  UIViewController *fromViewController = [transitionContext viewControllerForKey:UITransitionContextFromViewControllerKey];
  [fromViewController beginAppearanceTransition:NO animated:[self transitionDuration:transitionContext] > 0.0];
  [toViewController beginAppearanceTransition:YES animated:[self transitionDuration:transitionContext] > 0.0];
  
  [presentedView setNeedsLayout];
  [presentedView layoutIfNeeded];
  UIView *presentedViewSnapshot = [presentedView snapshotViewAfterScreenUpdates:NO];
  presentedView.hidden = YES;
  [containerView addSubview:presentedViewSnapshot];
  CGRect frame = presentedView.bounds;
  frame.origin.y = presentedView.frame.origin.y;
  presentedViewSnapshot.frame = frame;
  
  presentedViewSnapshot.alpha = 0.0;
  
  UIViewAnimationOptions options = UIViewAnimationOptionBeginFromCurrentState | UIViewAnimationOptionCurveEaseOut;
  
  [UIView animateWithDuration:[self transitionDuration:transitionContext]
                        delay:0.01
                      options:options
                   animations:^{
                     presentedViewSnapshot.alpha = 1.0;
                   } completion:^(__unused BOOL finished) {
                     presentedView.hidden = NO;
                     [presentedViewSnapshot removeFromSuperview];
                     [transitionContext completeTransition:YES];
                     [fromViewController endAppearanceTransition];
                     [toViewController endAppearanceTransition];
                   }];
}
@end
