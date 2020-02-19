//
//  NewWalletModuleInput.h
//
//
// 28/04/2018.
//
//

@import Foundation;
@import ViperMcFlurryX;

@protocol NewWalletModuleInput <RamblerViperModuleInput>
- (void) configureModuleWithPassword:(NSString *)password words:(NSArray <NSString *> *)words forgotPassword:(BOOL)forgotPassword;
@end
