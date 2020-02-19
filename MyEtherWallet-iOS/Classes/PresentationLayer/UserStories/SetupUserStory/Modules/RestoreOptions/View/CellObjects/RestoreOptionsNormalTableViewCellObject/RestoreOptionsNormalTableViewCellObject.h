//
//  RestoreOptionsNormalTableViewCellObject.h
//
//
// 2/18/19.
//
//

@import Foundation;
@import Nimbus.NimbusModels;

#import "CellObjectAction.h"

typedef NS_ENUM(short, RestoreOptionsNormalTableViewCellObjectType) {
  RestoreOptionsNormalTableViewCellObjectTypeRecoveryPhrase = 0,
};

@interface RestoreOptionsNormalTableViewCellObject : NSObject <NINibCellObject, NICellObject, CellObjectAction>
@property (nonatomic, readonly) RestoreOptionsNormalTableViewCellObjectType type;
@property (nonatomic, strong, readonly) NSString *title;
@property (nonatomic, readonly) BOOL compact;
+ (instancetype) objectWithType:(RestoreOptionsNormalTableViewCellObjectType)type compact:(BOOL)compact;
@end
