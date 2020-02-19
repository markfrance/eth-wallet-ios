//
//  StartViewOutput.h
//
//
// 14/04/2018.
//
//

@import Foundation;

@protocol StartViewOutput <NSObject>
- (void) didTriggerViewReadyEvent;
- (void) didTriggerViewWillAppearEvent;
- (void) createNewWalletAction;
- (void) restoreWallet;
@end
