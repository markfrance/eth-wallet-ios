//
//  ForgotPasswordInteractorInput.h
//

@import Foundation;

@class AccountPlainObject;

@protocol ForgotPasswordInteractorInput <NSObject>
- (void) configurateWithAccount:(AccountPlainObject *)account;
- (void) resetWallet;
@end
