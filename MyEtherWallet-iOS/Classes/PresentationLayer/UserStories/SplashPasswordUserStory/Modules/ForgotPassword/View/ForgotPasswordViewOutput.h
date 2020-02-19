//
//  ForgotPasswordViewOutput.h
//

@import Foundation;

@protocol ForgotPasswordViewOutput <NSObject>
- (void) didTriggerViewReadyEvent;
- (void) restoreAction;
- (void) closeAction;
- (void) resetWalletAction;
- (void) resetWalletConfirmedAction;
@end
