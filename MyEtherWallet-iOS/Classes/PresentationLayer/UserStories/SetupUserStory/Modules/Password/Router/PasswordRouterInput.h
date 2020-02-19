//
//  PasswordRouterInput.h
//

@import Foundation;

@protocol PasswordRouterInput <NSObject>
- (void) openConfirmationWithPassword:(NSString *)password words:(NSArray <NSString *> *)words forgotPassword:(BOOL)forgotPassword;
- (void) close;
@end
