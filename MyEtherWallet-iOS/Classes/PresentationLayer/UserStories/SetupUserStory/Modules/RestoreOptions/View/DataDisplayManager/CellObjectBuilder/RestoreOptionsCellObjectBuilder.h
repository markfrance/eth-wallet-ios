//
//  RestoreOptionsCellObjectBuilder.h
//
//
// 2/18/19.
//
//

@import Foundation;

@class RestoreOptionsNormalTableViewCellObject;
@class RestoreOptionsEmptyTableViewCellObject;

NS_ASSUME_NONNULL_BEGIN

@interface RestoreOptionsCellObjectBuilder : NSObject
- (RestoreOptionsNormalTableViewCellObject *) buildRecoveryPhraseCellObjectWithCompactSize:(BOOL)compact;
- (RestoreOptionsEmptyTableViewCellObject *) buildEmptyCellObject;
@end

NS_ASSUME_NONNULL_END
