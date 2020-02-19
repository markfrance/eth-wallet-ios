//
//  UIScreen+ScreenScaleType.m
//
//
// 16/07/2018.
//
//

#import "UIScreen+ScreenScaleType.h"

@implementation UIScreen (ScreenScaleType)

- (ScreenScaleType) scaleType {
  CGFloat scale = self.scale;
  if (fabs(scale - 1.0) < DBL_EPSILON) {
    return ScreenScaleTypex1;
  } else if (fabs(scale - 2.0) < DBL_EPSILON) {
    return ScreenScaleTypex2;
  } else if (fabs(scale - 3.0) < DBL_EPSILON) {
    return ScreenScaleTypex3;
  } else {
    return ScreenScaleTypeUnknown;
  }
}

@end
