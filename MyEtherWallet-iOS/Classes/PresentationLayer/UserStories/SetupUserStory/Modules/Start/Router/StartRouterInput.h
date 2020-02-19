//
//  StartRouterInput.h
//
//
// 14/04/2018.
//
//

@import Foundation;

@protocol StartRouterInput <NSObject>
- (void) openCreateNewWallet;
- (void) openWalletAnimated:(BOOL)animated;
- (void) openRestoreWallet;
@end
