//
//  UIScreen+ScreenScaleType.h
//
//
// 16/07/2018.
//
//

@import UIKit;

typedef NS_ENUM(short, ScreenScaleType) {
  ScreenScaleTypeUnknown  = 0,
  ScreenScaleTypex1       = 1,
  ScreenScaleTypex2       = 2,
  ScreenScaleTypex3       = 3,
};

@interface UIScreen (ScreenScaleType)
- (ScreenScaleType) scaleType;
@end
