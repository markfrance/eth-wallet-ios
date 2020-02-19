//
//  RestoreWalletModuleInput.h
//
//
// 28/04/2018.
//
//

@import Foundation;
@import ViperMcFlurryX;

@protocol RestoreWalletModuleInput <RamblerViperModuleInput>
- (void) configureModuleWhileForgotPassword:(BOOL)forgotPassword;
@end
