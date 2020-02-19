//
//  BackupWordsModuleInput.h
//

@import Foundation;
@import ViperMcFlurryX;

@class AccountPlainObject;

@protocol BackupWordsModuleInput <RamblerViperModuleInput>
- (void) configureModuleWithMnemonics:(NSArray <NSString *> *)mnemonics;
- (void) configureModuleWithMnemonics:(NSArray <NSString *> *)mnemonics account:(AccountPlainObject *)account;
@end
