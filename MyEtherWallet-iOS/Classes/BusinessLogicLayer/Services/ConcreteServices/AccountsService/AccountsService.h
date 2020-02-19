//
//  AccountsService.h
//
//
// 27/06/2018.
//
//

@import Foundation;

@class AccountModelObject;
@class AccountPlainObject;
@class NetworkPlainObject;

typedef void(^AccountsServiceCompletionBlock)(NSError *error);
typedef void(^AccountsServiceCreateCompletionBlock)(AccountModelObject *accountModelObject);

@protocol AccountsService <NSObject>
- (AccountModelObject *) obtainAccountWithAccount:(AccountPlainObject *)account;
- (AccountModelObject *) obtainActiveAccount;
- (AccountModelObject *) obtainOrCreateActiveAccount;
- (void) resetAccounts;
- (void) accountBackedUp:(AccountPlainObject *)account;
- (void) deleteAccount:(AccountPlainObject *)account;
@end
