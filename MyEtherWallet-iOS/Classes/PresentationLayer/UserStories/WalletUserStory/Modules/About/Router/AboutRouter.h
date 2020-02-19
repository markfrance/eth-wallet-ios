//
//  AboutRouter.h
//
//
// 25/07/2018.
//
//

#import "AboutRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface AboutRouter : NSObject <AboutRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end
