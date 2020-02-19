//
//  SplashPasswordRouter.h
//

#import "SplashPasswordRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface SplashPasswordRouter : NSObject <SplashPasswordRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end
