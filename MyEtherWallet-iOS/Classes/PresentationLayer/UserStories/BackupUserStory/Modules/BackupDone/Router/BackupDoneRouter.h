//
//  BackupDoneRouter.h
//

#import "BackupDoneRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface BackupDoneRouter : NSObject <BackupDoneRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end
