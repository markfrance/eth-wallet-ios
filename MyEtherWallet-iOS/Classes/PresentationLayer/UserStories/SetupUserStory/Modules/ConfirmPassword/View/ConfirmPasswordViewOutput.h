//
//  ConfirmPasswordViewOutput.h
//
//
// 01/05/2018.
//
//

@import Foundation;

@protocol ConfirmPasswordViewOutput <NSObject>
- (void) didTriggerViewReadyEvent;
- (void) passwordDidChanged:(NSString *)password;
- (void) nextActionWithPassword:(NSString *)password;
@end
