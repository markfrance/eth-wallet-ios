//
//  MEWconnectTokenTransfer.h
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@interface MEWconnectTokenTransfer : NSObject
@property (nonatomic, strong, readonly) NSString *to;
@property (nonatomic, strong, readonly) NSDecimalNumber *decimalValue;
+ (instancetype __nullable) tokenTransferWithData:(id)data;
@end

NS_ASSUME_NONNULL_END
