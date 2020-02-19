//
//  MEWSearchBar.m
//
//
// 16/05/2018.
//
//

#import "MEWSearchBar.h"

static CGFloat const kMEWSearchBarHeight = 44.0;

@implementation MEWSearchBar

- (CGSize)intrinsicContentSize {
  CGSize size = [super intrinsicContentSize];
  size.height = kMEWSearchBarHeight;
  return size;
}

@end
