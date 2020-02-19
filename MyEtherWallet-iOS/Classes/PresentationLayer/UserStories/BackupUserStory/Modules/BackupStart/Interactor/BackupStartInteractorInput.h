//
//  BackupStartInteractorInput.h
//

@import Foundation;

@class AccountPlainObject;

@protocol BackupStartInteractorInput <NSObject>
- (void) configurateWithAccount:(AccountPlainObject *)account;
- (void) passwordDidEntered:(NSString *)password;
- (AccountPlainObject *) obtainAccount;
@end
