//
//  RestorePrepareModuleInput.h
//
//
// 18/02/2019.
//  Copyright © 2019 MyEtherWallet, Inc.. All rights reserved.
//

@import Foundation;
@import ViperMcFlurryX;

@protocol RestorePrepareModuleInput <RamblerViperModuleInput>
- (void) configureModuleWhileForgotPassword:(BOOL)forgotPassword;
@end
