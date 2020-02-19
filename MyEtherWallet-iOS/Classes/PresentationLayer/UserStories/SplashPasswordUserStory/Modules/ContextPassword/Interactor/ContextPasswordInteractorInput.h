//
//  ContextPasswordInteractorInput.h
//

@import Foundation;

@class AccountPlainObject;

@protocol ContextPasswordInteractorInput <NSObject>
- (void) configurateWithAccount:(AccountPlainObject *)account;
- (AccountPlainObject *) obtainAccount;
- (void) checkPassword:(NSString *)password;
- (BOOL) isPasswordLocked;
@end
