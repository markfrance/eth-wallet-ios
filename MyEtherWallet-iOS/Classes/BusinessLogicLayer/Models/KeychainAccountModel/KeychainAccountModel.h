//
//  KeychainAccountModel.h
//
//
// 30/10/2018.
//
//

@import Foundation;

@class KeychainNetworkModel;

@interface KeychainAccountModel : NSObject
@property (nonatomic, strong, readonly) NSString *uid;
@property (nonatomic, readonly) BOOL backedUp;
@property (nonatomic, strong, readonly) NSArray <KeychainNetworkModel *> *networks;
+ (instancetype) itemWithUID:(NSString *)uid backedUp:(BOOL)backedUp networks:(NSArray <KeychainNetworkModel *> *)networks;
@end

