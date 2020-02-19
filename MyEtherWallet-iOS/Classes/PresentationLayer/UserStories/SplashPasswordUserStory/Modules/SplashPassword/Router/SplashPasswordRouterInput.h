//
//  SplashPasswordRouterInput.h
//

@import Foundation;

@class AccountPlainObject;

@protocol SplashPasswordRouterInput <NSObject>
- (void) close;
- (void) unwindToHome;
- (void) unwindToStart;
- (void) openForgotPasswordWithAccount:(AccountPlainObject *)account;
@end
