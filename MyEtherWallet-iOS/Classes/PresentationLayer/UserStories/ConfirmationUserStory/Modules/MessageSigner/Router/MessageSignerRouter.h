//
//  MessageSignerRouter.h
//
//
// 03/05/2018.
//
//

#import "MessageSignerRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface MessageSignerRouter : NSObject <MessageSignerRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end
