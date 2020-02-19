//
//  TransitioningDelegateBase.h
//

@import UIKit;

@protocol PresentationControllerFactory;

@interface TransitioningDelegateBase : NSObject <UIViewControllerTransitioningDelegate>
@property (nonatomic, strong) NSNumber *presentationControllerType;
@property (nonatomic, strong) id <UIViewControllerAnimatedTransitioning> presentingAnimationController;
@property (nonatomic, strong) id <UIViewControllerAnimatedTransitioning> dismissingAnimationController;
@property (nonatomic, strong) id <PresentationControllerFactory> presentationControllerFactory;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) BOOL dimmed;
@end
