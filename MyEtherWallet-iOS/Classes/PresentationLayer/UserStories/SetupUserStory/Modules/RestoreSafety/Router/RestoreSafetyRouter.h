//
//  RestoreSafetyRouter.h
//
//
// 18/02/2019.
//  Copyright © 2019 MyEtherWallet, Inc.. All rights reserved.
//

#import "RestoreSafetyRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface RestoreSafetyRouter : NSObject <RestoreSafetyRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end
