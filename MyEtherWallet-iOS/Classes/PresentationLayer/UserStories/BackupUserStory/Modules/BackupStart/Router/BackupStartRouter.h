//
//  BackupStartRouter.h
//

#import "BackupStartRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface BackupStartRouter : NSObject <BackupStartRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end
