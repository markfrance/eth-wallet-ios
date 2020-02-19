//
//  RestoreOptionsEmptyTableViewCellObject.m
//
//
// 2/18/19.
//
//

#import "RestoreOptionsEmptyTableViewCellObject.h"
#import "RestoreOptionsEmptyTableViewCell.h"

@implementation RestoreOptionsEmptyTableViewCellObject

+ (instancetype) object {
  return [[[self class] alloc] init];
}

#pragma mark - NICellObject

- (Class)cellClass {
  return [RestoreOptionsEmptyTableViewCell class];
}

#pragma mark - NINibCellObject

- (UINib *)cellNib {
  return [UINib nibWithNibName:NSStringFromClass([RestoreOptionsEmptyTableViewCell class]) bundle:[NSBundle mainBundle]];
}

@end
