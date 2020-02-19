//
//  BackupConfirmationInteractorInput.h
//

@import Foundation;

@class BackupConfirmationQuiz;
@class AccountPlainObject;

@protocol BackupConfirmationInteractorInput <NSObject>
- (void) configurateWithMnemonics:(NSArray <NSString *> *)mnemonics ofAccount:(AccountPlainObject *)account;
- (BackupConfirmationQuiz *) obtainRecoveryQuiz;
- (void) checkVector:(NSArray <NSString *> *)vector;
- (void) walletBackedUp;
- (void) enableSecurityProtection;
- (void) disableSecurityProtection;
@end
