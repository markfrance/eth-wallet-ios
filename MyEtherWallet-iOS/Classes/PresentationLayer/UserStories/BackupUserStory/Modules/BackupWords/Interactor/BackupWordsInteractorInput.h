//
//  BackupWordsInteractorInput.h
//

@import Foundation;

@class AccountPlainObject;

@protocol BackupWordsInteractorInput <NSObject>
- (void) configurateWithMnemonics:(NSArray <NSString *> *)mnemonics ofAccount:(AccountPlainObject *)account;
- (NSArray <NSString *> *) recoveryMnemonicsWords;
- (AccountPlainObject *) obtainAccount;
- (void) subscribeToEvents;
- (void) unsubscribeFromEvents;
- (void) enableSecurityProtection;
- (void) disableSecurityProtection;
@end
