//
//  BackupStartRouterInput.h
//

@import Foundation;

@protocol ContextPasswordModuleOutput;
@class AccountPlainObject;

@protocol BackupStartRouterInput <NSObject>
- (void) openContextPasswordWithOutput:(id <ContextPasswordModuleOutput>)output account:(AccountPlainObject *)account;
- (void) openWordsWithMnemonics:(NSArray <NSString *> *)mnemonics account:(AccountPlainObject *)account;
@end
