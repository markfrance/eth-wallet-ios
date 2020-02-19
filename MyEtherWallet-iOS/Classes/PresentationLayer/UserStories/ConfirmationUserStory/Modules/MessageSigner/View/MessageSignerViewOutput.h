//
//  MessageSignerViewOutput.h
//
//
// 03/05/2018.
//
//

@import Foundation;

@protocol MessageSignerViewOutput <NSObject>
- (void) didTriggerViewReadyEvent;
- (void) signAction;
- (void) declineAction;
@end

