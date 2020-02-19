//
//  BackupInfoInteractorInput.h
//

@import Foundation;

@class AccountPlainObject;

@protocol BackupInfoInteractorInput <NSObject>
- (void) configurateWithAccount:(AccountPlainObject *)account;
- (AccountPlainObject *) obtainAccount;
@end
