//
//  PropertyAnimatorsFactory.h
//
//
// 27/07/2018.
//
//

@import UIKit;

@protocol PropertyAnimatorsFactory <NSObject>
- (UIViewPropertyAnimator *) mewQuatroPropertyAnimatorWithDuration:(NSNumber *)duration;
@end
