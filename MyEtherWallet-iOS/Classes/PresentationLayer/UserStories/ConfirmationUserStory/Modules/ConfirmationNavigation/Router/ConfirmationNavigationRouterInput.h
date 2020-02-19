//
//  ConfirmationNavigationRouterInput.h
//
//
// 17/07/2018.
//
//

@import Foundation;
@import ViperMcFlurryX;

@protocol ConfirmationNavigationRouterInput <NSObject>
- (void) closeWithCompletion:(ModuleCloseCompletionBlock)completion;
@end
