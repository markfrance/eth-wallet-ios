//
//  ForgotPasswordViewInput.h
//

@import Foundation;

@protocol ForgotPasswordViewInput <NSObject>
- (void) setupInitialState;
- (void) presentResetConfirmation;
@end
