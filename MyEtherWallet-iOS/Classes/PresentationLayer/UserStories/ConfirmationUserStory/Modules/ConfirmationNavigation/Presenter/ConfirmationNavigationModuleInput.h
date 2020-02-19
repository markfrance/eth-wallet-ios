//
//  ConfirmationNavigationModuleInput.h
//
//
// 17/07/2018.
//
//

@import Foundation;
@import ViperMcFlurryX;

@protocol ConfirmationNavigationModuleInput <RamblerViperModuleInput>
- (void) configureModule;
- (void) closeWithCompletion:(ModuleCloseCompletionBlock)completion;
@end
