//
//  DeclinedTransactionViewOutput.h
//
//
// 28/04/2018.
//
//

@import Foundation;

@protocol DeclinedTransactionViewOutput <NSObject>
- (void) didTriggerViewReadyEvent;
- (void) closeAction;
@end
