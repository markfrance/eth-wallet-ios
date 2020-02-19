//
//  ShareRouter.h
//
//
// 11/10/2018.
//
//

#import "ShareRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface ShareRouter : NSObject <ShareRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end
