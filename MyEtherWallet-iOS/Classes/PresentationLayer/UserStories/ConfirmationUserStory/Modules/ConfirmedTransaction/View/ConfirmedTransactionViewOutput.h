//
//  ConfirmedTransactionViewOutput.h
//
//
// 19/05/2018.
//
//

@import Foundation;

@protocol ConfirmedTransactionViewOutput <NSObject>
- (void) didTriggerViewReadyEvent;
- (void) closeAction;
@end
