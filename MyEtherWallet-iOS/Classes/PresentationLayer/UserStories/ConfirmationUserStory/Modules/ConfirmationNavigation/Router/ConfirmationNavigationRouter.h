//
//  ConfirmationNavigationRouter.h
//
//
// 17/07/2018.
//
//

#import "ConfirmationNavigationRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface ConfirmationNavigationRouter : NSObject <ConfirmationNavigationRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end
