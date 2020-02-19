//
//  HomeModuleInput.h
//
//
// 28/04/2018.
//
//

@import Foundation;
@import ViperMcFlurryX;

@protocol HomeModuleInput <RamblerViperModuleInput>
- (void) configureModuleForNewWallet:(BOOL)newWallet;
- (void) configureBackupStatus;
- (void) configureAfterChangingNetwork;
- (void) takeControlAfterLaunch;
@end
