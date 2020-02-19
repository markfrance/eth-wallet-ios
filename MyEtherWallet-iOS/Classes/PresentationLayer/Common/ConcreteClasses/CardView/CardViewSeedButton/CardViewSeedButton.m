//
//  CardViewSeedButton.m
//
//
// 12/10/2018.
//
//

#import "CardViewSeedButton.h"

@implementation CardViewSeedButton

+ (instancetype) seedButton {
  CardViewSeedButton *button = [CardViewSeedButton buttonWithType:UIButtonTypeSystem];
  button.imageEdgeInsets = UIEdgeInsetsMake(0.0, 0.0, 0.0, 0.0);
  [button setImage:[UIImage imageNamed:@"card_share_icon"] forState:UIControlStateNormal];
  return button;
}

- (CGRect)titleRectForContentRect:(CGRect)contentRect {
  CGRect titleRect = [super titleRectForContentRect:contentRect];
  titleRect.origin.x = 0.0;
  return titleRect;
}

- (CGRect) imageRectForContentRect:(CGRect)contentRect {
  CGRect imageRect = [super imageRectForContentRect:contentRect];
  imageRect.origin.x = CGRectGetMaxX(contentRect) - self.imageEdgeInsets.right - CGRectGetWidth(imageRect);
  return imageRect;
}

@end
