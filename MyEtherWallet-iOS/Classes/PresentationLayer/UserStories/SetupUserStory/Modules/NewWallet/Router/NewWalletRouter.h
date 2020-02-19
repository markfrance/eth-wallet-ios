//
//  NewWalletRouter.h
//
//
// 28/04/2018.
//
//

#import "NewWalletRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface NewWalletRouter : NSObject <NewWalletRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end
