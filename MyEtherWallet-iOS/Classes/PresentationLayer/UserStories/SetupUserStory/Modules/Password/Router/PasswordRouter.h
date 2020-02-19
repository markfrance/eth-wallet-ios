//
//  PasswordRouter.h
//

#import "PasswordRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface PasswordRouter : NSObject <PasswordRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end
