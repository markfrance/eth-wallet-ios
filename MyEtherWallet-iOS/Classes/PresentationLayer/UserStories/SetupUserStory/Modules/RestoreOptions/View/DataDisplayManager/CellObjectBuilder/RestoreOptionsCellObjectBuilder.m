//
//  RestoreOptionsCellObjectBuilder.m
//
//
// 2/18/19.
//
//

#import "RestoreOptionsCellObjectBuilder.h"

#import "RestoreOptionsNormalTableViewCellObject.h"
#import "RestoreOptionsEmptyTableViewCellObject.h"

@implementation RestoreOptionsCellObjectBuilder

- (RestoreOptionsNormalTableViewCellObject *) buildRecoveryPhraseCellObjectWithCompactSize:(BOOL)compact {
  return [RestoreOptionsNormalTableViewCellObject objectWithType:RestoreOptionsNormalTableViewCellObjectTypeRecoveryPhrase compact:compact];
}

- (RestoreOptionsEmptyTableViewCellObject *) buildEmptyCellObject {
  return [RestoreOptionsEmptyTableViewCellObject object];
}

@end
