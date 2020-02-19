//
//  HomeDataDisplayManager.h
//
//
// 22/05/2018.
//
//

@import Foundation;

#import "DataDisplayManager.h"

@class CacheTransactionBatch;
@class HomeCellObjectBuilder;
@class HomePlainObject;
@class HomeTableViewAnimator;

@protocol HomeDataDisplayManagerProtocol <NSObject>
- (void) didTapCellWithObject:(HomePlainObject *)object;

@end

@interface HomeDataDisplayManager : NSObject <DataDisplayManager, UITableViewDelegate>
@property (nonatomic, weak) id <HomeDataDisplayManagerProtocol> delegate;
@property (nonatomic, strong) HomeCellObjectBuilder *cellObjectBuilder;
@property (nonatomic, weak) HomeTableViewAnimator *animator;
- (void)configureDataDisplayManagerWithAnimator:(HomeTableViewAnimator *)animator;
- (void)updateDataDisplayManagerWithTransactionBatch:(CacheTransactionBatch *)transactionBatch maximumCount:(NSUInteger)maximumCount;
- (CGFloat)estimatedContentHeight;
@end
