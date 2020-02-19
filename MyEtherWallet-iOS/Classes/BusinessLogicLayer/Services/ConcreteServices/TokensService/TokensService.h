//
//  TokensService.h
//
//
// 20/05/2018.
//
//

@import Foundation;

@class MasterTokenModelObject;
@class MasterTokenPlainObject;

@class TokenModelObject;

typedef void(^TokensServiceCompletion)(NSError *error);

@protocol TokensService <NSObject>
- (void) updateBalanceOfMasterToken:(MasterTokenPlainObject *)masterToken withCompletion:(TokensServiceCompletion)completion;
- (void) updateTokenBalancesOfMasterToken:(MasterTokenPlainObject *)masterToken withCompletion:(TokensServiceCompletion)completion;
- (NSUInteger) obtainNumberOfTokensOfMasterToken:(MasterTokenPlainObject *)masterToken;
- (NSDecimalNumber *) obtainTokensTotalPriceOfMasterToken:(MasterTokenPlainObject *)masterToken;
- (MasterTokenModelObject *) obtainActiveMasterToken;
- (TokenModelObject *) obtainTokenWithAddress:(NSString *)address ofMasterToken:(MasterTokenPlainObject *)masterToken;
- (void) resetTokens;
@end
