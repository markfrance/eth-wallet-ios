//
//  ContextPasswordRouter.h
//

#import "ContextPasswordRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface ContextPasswordRouter : NSObject <ContextPasswordRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end
