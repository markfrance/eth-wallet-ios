//
//  BackupConfirmationRouter.h
//

#import "BackupConfirmationRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface BackupConfirmationRouter : NSObject <BackupConfirmationRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end
