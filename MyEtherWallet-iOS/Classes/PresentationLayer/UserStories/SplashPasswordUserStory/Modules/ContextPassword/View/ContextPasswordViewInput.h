//
//  ContextPasswordViewInput.h
//
//
// 11/09/2018.
//
//

@import Foundation;

@protocol ContextPasswordViewInput <NSObject>
- (void) setupInitialStateWithTitle:(NSString *)title;
- (void) shakeInput;
- (void) prepareForDismiss;
- (void) lockPasswordField;
- (void) unlockPasswordField;
- (void) updateLockWithTimeInterval:(NSTimeInterval)unlockIn;
@end
