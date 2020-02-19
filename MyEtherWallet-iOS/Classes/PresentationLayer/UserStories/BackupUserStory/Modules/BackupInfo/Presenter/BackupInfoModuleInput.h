//
//  BackupInfoModuleInput.h
//

@import Foundation;
@import ViperMcFlurryX;

@class AccountPlainObject;

@protocol BackupInfoModuleInput <RamblerViperModuleInput>

- (void) configureModuleWithAccount:(AccountPlainObject *)account;

@end
