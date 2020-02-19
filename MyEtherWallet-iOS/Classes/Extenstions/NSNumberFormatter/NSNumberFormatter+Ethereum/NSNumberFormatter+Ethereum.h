//
//  NSNumberFormatter+Ethereum.h
//
//
// 11/05/2018.
//
//

@import Foundation;

#import "BlockchainNetworkTypes.h"

@interface NSNumberFormatter (Ethereum)
+ (instancetype)ethereumFormatterWithNetwork:(BlockchainNetworkType)network;
+ (instancetype)ethereumFormatterWithCurrencySymbol:(NSString *)currencySymbol;
@end
