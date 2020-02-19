//
//  UIScreen+AnimateBrightness.h
//
//
// 11/10/2018.
//
//

@import UIKit;

@interface UIScreen (AnimateBrightness)
- (CGFloat) animateBrightnessTo:(CGFloat)newBrightness withDuration:(NSTimeInterval)duration;
@end

