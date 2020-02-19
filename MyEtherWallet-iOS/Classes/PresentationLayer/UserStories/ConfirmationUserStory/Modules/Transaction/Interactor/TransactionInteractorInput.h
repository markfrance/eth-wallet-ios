//
//  TransactionInteractorInput.h
//
//
// 28/04/2018.
//
//

@import Foundation;

@class AccountPlainObject;
@class MasterTokenPlainObject;
@class MEWConnectCommand;
@class MEWConnectTransaction;

@protocol TransactionInteractorInput <NSObject>
- (void) configurateWithMessage:(MEWConnectCommand *)message masterToken:(MasterTokenPlainObject *)masterToken;
- (MEWConnectTransaction *) obtainTransaction;
- (AccountPlainObject *) obtainAccount;
- (NSString *) obtainNetworkToConfirm;
- (void) signTransactionWithPassword:(NSString *)password;
@end
