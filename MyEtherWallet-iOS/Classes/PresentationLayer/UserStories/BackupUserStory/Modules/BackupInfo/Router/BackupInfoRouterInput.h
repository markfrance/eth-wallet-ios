//
//  BackupInfoRouterInput.h
//

@import Foundation;

@class AccountPlainObject;

@protocol BackupInfoRouterInput <NSObject>
- (void) openBackupStartWithAccount:(AccountPlainObject *)account;
- (void) close;
@end
