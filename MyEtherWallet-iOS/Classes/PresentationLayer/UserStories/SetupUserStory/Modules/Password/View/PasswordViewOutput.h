//
//  PasswordViewOutput.h
//

@import Foundation;

@protocol PasswordViewOutput <NSObject>
- (void) didTriggerViewReadyEvent;
- (void) passwordDidChanged:(NSString *)password;
- (void) cancelAction;
- (void) nextAction;
@end
