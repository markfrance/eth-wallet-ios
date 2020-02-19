//
//  SettingsRouter.h
//
//
// 28/04/2018.
//
//

#import "SettingsRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface SettingsRouter : NSObject <SettingsRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end
