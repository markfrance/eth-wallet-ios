//
//  MessageSignerInteractorInput.h
//
//
// 03/05/2018.
//
//

@import Foundation;

@class MEWConnectCommand;
@class MEWConnectMessage;
@class MasterTokenPlainObject;
@class AccountPlainObject;

@protocol MessageSignerInteractorInput <NSObject>
- (void) configurateWithMessage:(MEWConnectCommand *)message masterToken:(MasterTokenPlainObject *)masterToken;
- (MEWConnectMessage *) obtainMessage;
- (AccountPlainObject *) obtainAccount;
- (void) signMessageWithPassword:(NSString *)password;
@end
