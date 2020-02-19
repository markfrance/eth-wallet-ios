//
//  HomeEmptyTableViewCellObject.m
//
//
// 28/05/2018.
//
//

#import "HomeEmptyTableViewCellObject.h"
#import "HomeEmptyTableViewCell.h"

@implementation HomeEmptyTableViewCellObject

+ (instancetype)object {
  return [[[self class] alloc] init];
}

#pragma mark - NICellObject

- (Class)cellClass {
  return [HomeEmptyTableViewCell class];
}

#pragma mark - NINibCellObject

- (UINib *)cellNib {
  return [UINib nibWithNibName:NSStringFromClass([HomeEmptyTableViewCell class]) bundle:[NSBundle mainBundle]];
}

@end
