//
//  ForgotPasswordRouter.h
//

#import "ForgotPasswordRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface ForgotPasswordRouter : NSObject <ForgotPasswordRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end
