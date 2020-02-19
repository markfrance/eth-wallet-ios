//
//  CacheTransactionSection.h
//

@import Foundation;
@import CoreData;

@interface CacheTransactionSection : NSObject
@property (strong, nonatomic, readonly) NSString *name;
@property (assign, nonatomic, readonly) NSFetchedResultsChangeType changeType;
@property (assign, nonatomic, readonly) NSInteger oldIndex;
@property (assign, nonatomic, readonly) NSInteger updatedIndex;
+ (instancetype) transactionSectionWithName:(NSString *)name
                                   oldIndex:(NSInteger)oldIndex
                               updatedIndex:(NSInteger)uodatedIndex
                                 changeType:(NSFetchedResultsChangeType)changeType;
@end

