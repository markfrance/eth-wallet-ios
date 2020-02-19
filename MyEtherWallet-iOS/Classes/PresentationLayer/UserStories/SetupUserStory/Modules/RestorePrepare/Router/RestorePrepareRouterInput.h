//
//  RestorePrepareRouterInput.h
//
//
// 18/02/2019.
//  Copyright © 2019 MyEtherWallet, Inc.. All rights reserved.
//

@import Foundation;

@protocol RestorePrepareRouterInput <NSObject>
- (void) openRestoreWalletWhileForgotPassword:(BOOL)forgotPassword;
@end