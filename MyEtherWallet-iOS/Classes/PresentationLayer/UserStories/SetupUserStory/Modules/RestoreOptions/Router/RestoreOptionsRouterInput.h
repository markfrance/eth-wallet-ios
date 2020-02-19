//
//  RestoreOptionsRouterInput.h
//
//
// 18/02/2019.
//  Copyright © 2019 MyEtherWallet, Inc.. All rights reserved.
//

@import Foundation;

@protocol RestoreOptionsRouterInput <NSObject>
- (void) close;
- (void) openRestoreSafery;
- (void) openPrepareWhileForgotPassword:(BOOL)forgotPassword;
@end
