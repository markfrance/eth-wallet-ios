//
//  AccessoryTableViewAction.m
//
//
// 24/06/2018.
//
//

#import "AccessoryTableViewAction.h"
#import "CellObjectAction.h"

@implementation AccessoryTableViewAction

- (UITableViewCellAccessoryType)accessoryTypeForObject:(id)object {
  if ([object conformsToProtocol:@protocol(CellObjectAction)]) {
    return [object accessoryType];
  }
  return [super accessoryTypeForObject:object];
}

@end
