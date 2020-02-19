//
//  KeychainHistoryItemModel.h
//
//
// 13/07/2018.
//
//

@import Foundation;

@interface KeychainHistoryItemModel : NSObject
@property (nonatomic, strong, readonly) NSDate *date;
@property (nonatomic, strong, readonly) NSString *userId;
+ (instancetype) historyItemModelWithUserId:(NSString *)userId date:(NSDate *)date;
@end
