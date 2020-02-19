//
//  CacheTransactionBatch.h
//
//
// 22/05/2018.
//
//

@import Foundation;

@class CacheTransaction;
@class CacheTransactionSection;

@interface CacheTransactionBatch : NSObject
@property (strong, nonatomic, readonly) NSOrderedSet <CacheTransaction *> *insertTransactions;
@property (strong, nonatomic, readonly) NSOrderedSet <CacheTransaction *> *updateTransactions;
@property (strong, nonatomic, readonly) NSOrderedSet <CacheTransaction *> *deleteTransactions;
@property (strong, nonatomic, readonly) NSOrderedSet <CacheTransaction *> *moveTransactions;
@property (strong, nonatomic, readonly) NSOrderedSet <CacheTransactionSection *> *sections;
- (void)addTransaction:(CacheTransaction *)transaction;
- (void)addSection:(CacheTransactionSection *)section;
- (BOOL)isEmpty;
@end

