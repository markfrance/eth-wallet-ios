//
//  TransitioningDelegateFactory.h
//

@import Foundation;

#import "TransitioningDelegateType.h"

@protocol UIViewControllerTransitioningDelegate;

@protocol TransitioningDelegateFactory <NSObject>
- (id <UIViewControllerTransitioningDelegate>) transitioningDelegateWithType:(NSNumber *)type cornerRadius:(NSNumber *)cornerRadius;
@end
