//
//  UIScreen+ScreenSizeType.h
//
//
// 16/07/2018.
//
//

@import UIKit;

/* Covers only iPhone's */
typedef NS_ENUM(short, ScreenSizeType) {
  ScreenSizeTypeUnknown     = 0,
  ScreenSizeTypeInches35    = 1, //from iOS 10 not used anymore
  ScreenSizeTypeInches40    = 2,
  ScreenSizeTypeInches47    = 3,
  ScreenSizeTypeInches55    = 4,
  ScreenSizeTypeInches58    = 5,
};

@interface UIScreen (ScreenSizeType)
- (ScreenSizeType) screenSizeType;
@end
