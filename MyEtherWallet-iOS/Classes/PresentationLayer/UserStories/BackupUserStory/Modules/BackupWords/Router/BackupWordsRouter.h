//
//  BackupWordsRouter.h
//

#import "BackupWordsRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface BackupWordsRouter : NSObject <BackupWordsRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end
