//
//  RestoreOptionsDataDisplayManager.h
//
//
// 2/18/19.
//
//

@import Foundation;

#import "DataDisplayManager.h"

@class RestoreOptionsCellObjectBuilder;

@protocol RestoreOptionsDataDisplayManagerDelegate <NSObject>
- (void) didTapRecoveryPhrase;
@end

NS_ASSUME_NONNULL_BEGIN

@interface RestoreOptionsDataDisplayManager : NSObject <DataDisplayManager, UITableViewDelegate>
@property (nonatomic, weak) id <RestoreOptionsDataDisplayManagerDelegate> delegate;
@property (nonatomic, strong) RestoreOptionsCellObjectBuilder *cellObjectBuilder;
- (void) updateDataDisplayManager;
@end

NS_ASSUME_NONNULL_END
