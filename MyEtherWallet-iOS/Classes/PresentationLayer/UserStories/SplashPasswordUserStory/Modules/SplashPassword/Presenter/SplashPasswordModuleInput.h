//
//  SplashPasswordModuleInput.h
//

@import Foundation;
@import ViperMcFlurryX;

@class AccountPlainObject;

@protocol SplashPasswordModuleInput <RamblerViperModuleInput>
- (void) configureModuleWithAccount:(AccountPlainObject *)account autoControl:(BOOL)autoControl;
- (void) takeControlAfterLaunch;
@end
