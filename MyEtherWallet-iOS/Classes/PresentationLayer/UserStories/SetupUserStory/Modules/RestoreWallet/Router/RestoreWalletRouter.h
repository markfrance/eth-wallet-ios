//
//  RestoreWalletRouter.h
//
//
// 28/04/2018.
//
//

#import "RestoreWalletRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface RestoreWalletRouter : NSObject <RestoreWalletRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end
