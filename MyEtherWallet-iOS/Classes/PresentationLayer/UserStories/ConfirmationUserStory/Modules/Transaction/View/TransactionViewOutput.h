//
//  TransactionViewOutput.h
//
//
// 28/04/2018.
//
//

@import Foundation;

@protocol TransactionViewOutput <NSObject>
- (void) didTriggerViewReadyEvent;
- (void) signAction;
- (void) declineAction;
- (void) confirmAddressAction:(BOOL)confirmed;
- (void) confirmAmountAction:(BOOL)confirmed;
- (void) confirmNetworkAction:(BOOL)confirmed;
@end
