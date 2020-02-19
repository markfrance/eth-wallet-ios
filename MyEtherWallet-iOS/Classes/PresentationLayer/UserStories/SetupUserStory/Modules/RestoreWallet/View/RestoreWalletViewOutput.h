//
//  RestoreWalletViewOutput.h
//
//
// 28/04/2018.
//
//

@import Foundation;

@protocol RestoreWalletViewOutput <NSObject>
- (void) didTriggerViewReadyEvent;
- (void) cancelAction;
- (void) nextAction;
- (void) textDidChangedAction:(NSString *)text;
@end
