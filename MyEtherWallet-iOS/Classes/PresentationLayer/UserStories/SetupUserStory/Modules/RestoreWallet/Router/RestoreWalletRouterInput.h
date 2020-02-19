//
//  RestoreWalletRouterInput.h
//
//
// 28/04/2018.
//
//

@import Foundation;

@protocol RestoreWalletRouterInput <NSObject>
- (void) openPasswordWithWords:(NSArray <NSString *> *)words forgotPassword:(BOOL)forgotPassword;
- (void) close;
@end
