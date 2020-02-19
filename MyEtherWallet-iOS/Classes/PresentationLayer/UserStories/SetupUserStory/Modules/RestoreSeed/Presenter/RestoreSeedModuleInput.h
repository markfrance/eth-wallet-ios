//
//  RestoreSeedModuleInput.h
//
//
// 04/11/2018.
//  Copyright © 2018 MyEtherWallet, Inc.. All rights reserved.
//

@import Foundation;
@import ViperMcFlurryX;

@class AccountPlainObject;

@protocol RestoreSeedModuleInput <RamblerViperModuleInput>
- (void) configureModuleWithAccount:(AccountPlainObject *)account password:(NSString *)password;
@end
