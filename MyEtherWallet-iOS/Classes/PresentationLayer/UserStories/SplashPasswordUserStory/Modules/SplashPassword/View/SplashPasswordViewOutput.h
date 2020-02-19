//
//  SplashPasswordViewOutput.h
//

@import Foundation;

@protocol SplashPasswordViewOutput <NSObject>
- (void) didTriggerViewReadyEvent;
- (void) doneActionWithPassword:(NSString *)password;
- (void) forgotPasswordAction;
- (void) resetWalletAction;
- (void) resetWalletConfirmedAction;
@end
