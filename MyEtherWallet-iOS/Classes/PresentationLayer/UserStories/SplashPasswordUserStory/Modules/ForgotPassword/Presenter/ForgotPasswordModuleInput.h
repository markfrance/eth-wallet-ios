//
//  ForgotPasswordModuleInput.h
//

@import Foundation;
@import ViperMcFlurryX;

@class AccountPlainObject;

@protocol ForgotPasswordModuleInput <RamblerViperModuleInput>
- (void) configureModuleWithAccount:(AccountPlainObject *)account;
@end
