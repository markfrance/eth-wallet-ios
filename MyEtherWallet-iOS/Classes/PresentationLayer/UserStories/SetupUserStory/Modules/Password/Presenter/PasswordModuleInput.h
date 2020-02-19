//
//  PasswordModuleInput.h
//

@import Foundation;
@import ViperMcFlurryX;

@protocol PasswordModuleInput <RamblerViperModuleInput>
- (void) configureModule;
- (void) configureModuleWithWords:(NSArray <NSString *> *)words forgotPassword:(BOOL)forgotPassword;
@end
