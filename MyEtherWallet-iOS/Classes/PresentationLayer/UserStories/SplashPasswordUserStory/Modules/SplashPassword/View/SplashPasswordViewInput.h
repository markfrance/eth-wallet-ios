//
//  SplashPasswordViewInput.h
//

@import Foundation;

@protocol SplashPasswordViewInput <NSObject>
- (void) setupInitialStateWithAutoControl:(BOOL)autoControl;
- (void) becomePasswordInputActive;
- (void) shakeInput;
- (void) lockPasswordField;
- (void) unlockPasswordField;
- (void) presentResetConfirmation;
- (void) updateLockWithTimeInterval:(NSTimeInterval)unlockIn;
@end
