//
//  SplashPasswordInteractorInput.h
//

@import Foundation;

@class AccountPlainObject;

@protocol SplashPasswordInteractorInput <NSObject>
- (void) configurateWithAccount:(AccountPlainObject *)account;
- (AccountPlainObject *) obtainAccount;
- (void) checkPassword:(NSString *)password;
- (void) resetWallet;
- (BOOL) isPasswordLocked;
@end
