//
//  ConfirmPasswordRouter.h
//
//
// 01/05/2018.
//
//

#import "ConfirmPasswordRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface ConfirmPasswordRouter : NSObject <ConfirmPasswordRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end
