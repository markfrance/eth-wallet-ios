//
//  CacheTracker.h
//
//
// 22/05/2018.
//
//

@import Foundation;

@class CacheTransactionBatch;
@class CacheRequest;
@protocol CacheTrackerDelegate;

typedef void(^CacheTrackerObjectPreparationBlock)(id object);

@protocol CacheTracker <NSObject>
@property (nonatomic, weak) id <CacheTrackerDelegate> delegate;
- (void) setupWithCacheRequest:(CacheRequest *)cacheRequest;
- (void) setupWithCacheRequest:(CacheRequest *)cacheRequest preparationObjectBlock:(CacheTrackerObjectPreparationBlock)block;
- (void) filterResultsWithPredicate:(NSPredicate *)predicate;
- (void) filterResultsWithPredicate:(NSPredicate *)predicate sortDescriptors:(NSArray <NSSortDescriptor *> *)sortDescriptors;
- (CacheTransactionBatch *) obtainTransactionBatchFromCurrentCache;
- (CacheTransactionBatch *) obtainReloadTrasactionBatchFromCurrentCache;
@end

@protocol CacheTrackerDelegate <NSObject>
- (void) didProcessTransactionBatch:(CacheTransactionBatch *)transactionBatch;
@end
