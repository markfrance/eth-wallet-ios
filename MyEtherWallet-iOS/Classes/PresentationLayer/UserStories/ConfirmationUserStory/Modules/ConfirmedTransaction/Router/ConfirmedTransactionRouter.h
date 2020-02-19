//
//  ConfirmedTransactionRouter.h
//
//
// 19/05/2018.
//
//

#import "ConfirmedTransactionRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface ConfirmedTransactionRouter : NSObject <ConfirmedTransactionRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end
