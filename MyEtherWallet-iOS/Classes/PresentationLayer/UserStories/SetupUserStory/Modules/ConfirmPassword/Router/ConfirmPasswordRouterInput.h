//
//  ConfirmPasswordRouterInput.h
//
//
// 01/05/2018.
//
//

@import Foundation;

@protocol ConfirmPasswordRouterInput <NSObject>
- (void) openNewWalletWithPassword:(NSString *)password words:(NSArray <NSString *> *)words forgotPassword:(BOOL)forgotPassword;
@end
