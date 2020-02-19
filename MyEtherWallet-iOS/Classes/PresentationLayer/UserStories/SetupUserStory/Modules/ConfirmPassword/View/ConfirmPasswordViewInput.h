//
//  ConfirmPasswordViewInput.h
//
//
// 01/05/2018.
//
//

@import Foundation;

@protocol ConfirmPasswordViewInput <NSObject>
- (void) setupInitialState;
- (void) showValidPasswordInput;
- (void) showInvalidPasswordInput;
- (void) disableNext;
- (void) enableNext;
@end
