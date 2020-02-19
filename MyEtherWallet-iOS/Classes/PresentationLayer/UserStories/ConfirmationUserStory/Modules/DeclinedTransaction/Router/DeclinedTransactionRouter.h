//
//  DeclinedTransactionRouter.h
//
//
// 28/04/2018.
//
//

#import "DeclinedTransactionRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface DeclinedTransactionRouter : NSObject <DeclinedTransactionRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end
