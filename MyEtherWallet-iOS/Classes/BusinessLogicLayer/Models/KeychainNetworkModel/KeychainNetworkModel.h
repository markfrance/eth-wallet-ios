//
//  KeychainNetworkModel.h
//
//
// 29/06/2018.
//
//

@import Foundation;

#import "BlockchainNetworkTypes.h"

@interface KeychainNetworkModel : NSObject
@property (nonatomic, strong, readonly) NSString *address;
@property (nonatomic, readonly) BlockchainNetworkType chainID;
+ (instancetype) itemModelWithAddress:(NSString *)address chainID:(BlockchainNetworkType)chainID;
@end
