//
//  BlockchainNetworkService.h
//
//
// 27/06/2018.
//
//

@import Foundation;

#import "BlockchainNetworkTypes.h"

@class AccountPlainObject;
@class NetworkPlainObject;
@class NetworkModelObject;

@protocol BlockchainNetworkService <NSObject>
- (NetworkModelObject *) obtainActiveNetwork;
- (void) selectNetwork:(NetworkPlainObject *)network inAccount:(AccountPlainObject *)account;
- (NetworkModelObject *) createNetworkWithChainID:(BlockchainNetworkType)chainID inAccount:(AccountPlainObject *)account;
@end
