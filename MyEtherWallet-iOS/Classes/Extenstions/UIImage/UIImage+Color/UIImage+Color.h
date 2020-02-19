//
//  UIImage+Color.h
//
//
// 01/05/2018.
//
//

@import UIKit;

@interface UIImage (Color)
+ (UIImage *) imageWithColor:(UIColor *)color size:(CGSize)size cornerRadius:(CGFloat)cornerRadius corners:(UIRectCorner)corners borderColor:(UIColor *)borderColor borderSize:(CGFloat)borderSize insets:(UIEdgeInsets)insets;
+ (UIImage *) imageWithColor:(UIColor *)color size:(CGSize)size cornerRadius:(CGFloat)cornerRadius borderColor:(UIColor *)borderColor borderSize:(CGFloat)borderSize;
+ (UIImage *) imageWithColor:(UIColor *)color size:(CGSize)size cornerRadius:(CGFloat)cornerRadius corners:(UIRectCorner)corners;
+ (UIImage *) imageWithColor:(UIColor *)color size:(CGSize)size cornerRadius:(CGFloat)cornerRadius insets:(UIEdgeInsets)insets;
+ (UIImage *) imageWithColor:(UIColor *)color size:(CGSize)size cornerRadius:(CGFloat)cornerRadius;
+ (UIImage *) imageWithColor:(UIColor *)color size:(CGSize)size;
+ (UIImage *) imageWithColor:(UIColor *)color;
@end
