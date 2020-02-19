//
//  BackupConfirmationModuleInput.h
//

@import Foundation;
@import ViperMcFlurryX;

@class AccountPlainObject;

@protocol BackupConfirmationModuleInput <RamblerViperModuleInput>
- (void) configureModuleWithMnemonics:(NSArray <NSString *> *)mnemonics account:(AccountPlainObject *)account;
@end
