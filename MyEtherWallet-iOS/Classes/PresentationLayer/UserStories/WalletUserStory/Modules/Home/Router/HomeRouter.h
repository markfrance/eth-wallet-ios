//
//  HomeRouter.h
//
//
// 28/04/2018.
//
//

#import "HomeRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface HomeRouter : NSObject <HomeRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;
@property (nonatomic, strong) RamblerViperModuleFactory *transactionFactory;
@property (nonatomic, strong) RamblerViperModuleFactory *messageSignerFactory;
@end
