//
//  KeychainHistoryItemModel.m
//
//
// 13/07/2018.
//
//

#import "KeychainHistoryItemModel.h"

@interface KeychainHistoryItemModel()
@property (nonatomic, strong) NSDate *date;
@property (nonatomic, strong) NSString *userId;
@end

@implementation KeychainHistoryItemModel

+ (instancetype) historyItemModelWithUserId:(NSString *)userId date:(NSDate *)date {
  KeychainHistoryItemModel *historyItemModel = [[KeychainHistoryItemModel alloc] init];
  historyItemModel.userId = userId;
  historyItemModel.date = date;
  return historyItemModel;
}

@end
