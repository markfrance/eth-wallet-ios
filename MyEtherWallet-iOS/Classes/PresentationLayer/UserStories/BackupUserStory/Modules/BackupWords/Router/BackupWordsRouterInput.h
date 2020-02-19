//
//  BackupWordsRouterInput.h
//

@import Foundation;

@class AccountPlainObject;

@protocol BackupWordsRouterInput <NSObject>
- (void) close;
- (void) openConfirmationWithMnemonics:(NSArray <NSString *> *)mnemonics account:(AccountPlainObject *)account;
@end
