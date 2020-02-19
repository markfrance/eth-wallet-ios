//
//  ConfirmPasswordModuleInput.h
//
//
// 01/05/2018.
//
//

@import Foundation;
@import ViperMcFlurryX;

@protocol ConfirmPasswordModuleInput <RamblerViperModuleInput>
- (void) configureModuleWithPassword:(NSString *)password words:(NSArray <NSString *> *)words forgotPassword:(BOOL)forgotPassword;
@end
