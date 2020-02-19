//
//  UIColor+Hex.h
//
//
// 01/05/2018.
//
//

@import UIKit;

@interface UIColor (Hex)
+ (instancetype)colorWithRGB:(uint32_t)rgb;
+ (instancetype)colorWithRGB:(uint32_t)rgb alpha:(CGFloat)alpha;
+ (instancetype)colorWithRGBString:(NSString *)rgb;
@end
