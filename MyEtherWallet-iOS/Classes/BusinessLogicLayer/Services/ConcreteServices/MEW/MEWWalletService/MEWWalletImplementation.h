//
//  MEWWalletImplementation.h
//
//
// 29/04/2018.
//
//

#import "MEWwallet.h"

@class Web3Wrapper;

@protocol KeychainService;
@protocol Ponsomizer;
@protocol BlockchainNetworkService;

@interface MEWWalletImplementation : NSObject <MEWwallet>
@property (nonatomic, strong) Web3Wrapper *wrapper;
@property (nonatomic, strong) id <KeychainService> keychainService;
@property (nonatomic, strong) id <BlockchainNetworkService> networkService;
@property (nonatomic, strong) id <Ponsomizer> ponsomizer;
@end
