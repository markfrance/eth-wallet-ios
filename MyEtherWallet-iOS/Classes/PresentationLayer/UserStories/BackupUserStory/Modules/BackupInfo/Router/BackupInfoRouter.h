//
//  BackupInfoRouter.h
//

#import "BackupInfoRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface BackupInfoRouter : NSObject <BackupInfoRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end
