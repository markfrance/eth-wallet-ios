//
//  HomeTableViewAnimator.h
//
//
// 22/05/2018.
//
//

@import UIKit;

@class CacheTransactionBatch;

@interface HomeTableViewAnimator : NSObject
@property (nonatomic, weak) UITableView *tableView;
@property (nonatomic) BOOL animated;
- (void)updateWithTransactionBatch:(CacheTransactionBatch *)transactionBatch;
- (void)reloadData;
@end
