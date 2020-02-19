//
//  StartRouter.h
//
//
// 14/04/2018.
//
//

#import "StartRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface StartRouter : NSObject <StartRouterInput>
@property (nonatomic, weak) id <RamblerViperModuleTransitionHandlerProtocol> transitionHandler;
@property (nonatomic, strong) RamblerViperModuleFactory *homeFactory;
@end
