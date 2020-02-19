//
//  HomeInteractorInput.h
//
//
// 28/04/2018.
//
//

@import Foundation;

#import "BlockchainNetworkTypes.h"

@class MEWConnectResponse;
@class AccountPlainObject;
@class NetworkPlainObject;
@class MasterTokenPlainObject;

@protocol HomeInteractorInput <NSObject>
- (void) refreshMasterToken;
- (AccountPlainObject *) obtainAccount;
- (NetworkPlainObject *) obtainNetwork;
- (MasterTokenPlainObject *) obtainMasterToken;
- (void) configurate;
- (NSUInteger) obtainNumberOfTokens;
- (NSDecimalNumber *) obtainTotalPriceOfTokens;
- (void) reloadData;
- (void) refreshTokens;
- (void) searchTokensWithTerm:(NSString *)term;
- (void) disconnect;
- (BOOL) isConnected;
- (void) selectMainnetNetwork;
- (void) selectRopstenNetwork;
- (void) generateMissedKeysWithPassword:(NSString *)password;
- (void) unlockForUpdates;
@end
