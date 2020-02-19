//
//  UIColor+Application.h
//
//
// 01/05/2018.
//
//

@import UIKit;

@interface UIColor (Application)
+ (instancetype) mainApplicationColor;
+ (instancetype) mainLightApplicationColor;
+ (instancetype) placeholderColor;
+ (instancetype) weakColor;
+ (instancetype) sosoColor;
+ (instancetype) goodColor;
+ (instancetype) greatColor;
+ (instancetype) barButtonColorForState:(UIControlState)state;
+ (instancetype) darkTextColor;
+ (instancetype) applicationLightBlue;
+ (instancetype) backgroundLightBlue;
+ (instancetype) lightGreyTextColor;
+ (instancetype) disabledBackgroundColor;
+ (instancetype) disabledPlaceholderColor;
+ (instancetype) connectionLightGrayBackgroundColor;
+ (instancetype) noInternetConnectionColor;
+ (instancetype) dimmingBackgroundColor;
@end
