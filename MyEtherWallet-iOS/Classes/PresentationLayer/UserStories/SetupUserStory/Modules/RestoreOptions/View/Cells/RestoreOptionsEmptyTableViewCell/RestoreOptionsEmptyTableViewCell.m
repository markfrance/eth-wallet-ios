//
//  RestoreOptionsEmptyTableViewCell.m
//
//
// 2/18/19.
//
//

#import "RestoreOptionsEmptyTableViewCell.h"
#import "RestoreOptionsEmptyTableViewCellObject.h"

static CGFloat const kRestoreOptionsEmptyTableViewCellHeight = 1.0;

@implementation RestoreOptionsEmptyTableViewCell

#pragma mark - NICell methods

- (BOOL)shouldUpdateCellWithObject:(__unused RestoreOptionsEmptyTableViewCellObject *)object {
  return NO;
}

+ (CGFloat)heightForObject:(__unused id)object atIndexPath:(__unused NSIndexPath *)indexPath tableView:(__unused UITableView *)tableView {
  return kRestoreOptionsEmptyTableViewCellHeight;
}

@end
