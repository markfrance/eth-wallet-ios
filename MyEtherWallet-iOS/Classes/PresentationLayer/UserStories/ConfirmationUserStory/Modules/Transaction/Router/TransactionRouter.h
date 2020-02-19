//
//  TransactionRouter.h
//
//
// 28/04/2018.
//
//

#import "TransactionRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface TransactionRouter : NSObject <TransactionRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end
