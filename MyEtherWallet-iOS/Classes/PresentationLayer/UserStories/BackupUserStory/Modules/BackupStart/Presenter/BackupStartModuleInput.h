//
//  BackupStartModuleInput.h
//

@import Foundation;
@import ViperMcFlurryX;

@class AccountPlainObject;

@protocol BackupStartModuleInput <RamblerViperModuleInput>

- (void) configureModuleWithAccount:(AccountPlainObject *)account;

@end
