//
//  ContextPasswordViewOutput.h
//
//
// 11/09/2018.
//
//

@import Foundation;

@protocol ContextPasswordViewOutput <NSObject>
- (void) didTriggerViewReadyEvent;
- (void) cancelAction;
- (void) resignAction;
- (void) doneActionWithPassword:(NSString *)password;
@end
