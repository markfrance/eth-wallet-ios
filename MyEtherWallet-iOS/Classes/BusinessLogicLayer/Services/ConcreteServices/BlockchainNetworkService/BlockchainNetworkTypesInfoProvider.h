//
//  BlockchainNetworkTypesInfoProvider.h
//
//
// 3/20/19.
//
//

@import Foundation;

#import "BlockchainNetworkTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface BlockchainNetworkTypesInfoProvider : NSObject
+ (NSString *) currencySymbolForNetworkType:(BlockchainNetworkType)type;
+ (NSString *) nameForNetworkType:(BlockchainNetworkType)type;
+ (NSString *) stringFromNetworkType:(BlockchainNetworkType)type;
@end

NS_ASSUME_NONNULL_END
