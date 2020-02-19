//
//  MEWConnectMessage.h
//
//
// 31/08/2018.
//
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@interface MEWConnectMessage : NSObject
@property (nonatomic, strong, readonly) NSString *message;
@property (nonatomic, strong, readonly) NSData *messageHash;
+ (instancetype) messageWithJSONObject:(NSDictionary *)data;
@end

NS_ASSUME_NONNULL_END
