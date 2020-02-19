//
//  DataDisplayManager.h
//
//
// 22/05/2018.
//
//

@import Foundation;

@protocol DataDisplayManager <NSObject>
- (id<UITableViewDataSource>)dataSourceForTableView:(UITableView *)tableView;
- (id<UITableViewDelegate>)delegateForTableView:(UITableView *)tableView withBaseDelegate:(id <UITableViewDelegate>)baseTableViewDelegate;
@end
