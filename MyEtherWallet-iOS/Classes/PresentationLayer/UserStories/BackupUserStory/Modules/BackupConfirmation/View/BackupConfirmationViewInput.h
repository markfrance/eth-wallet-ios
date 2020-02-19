//
//  BackupConfirmationViewInput.h
//

@import Foundation;

@class BackupConfirmationQuiz;

@protocol BackupConfirmationViewInput <NSObject>
- (void) setupInitialStateWithQuiz:(BackupConfirmationQuiz *)quiz;
- (void) enableFinish:(BOOL)enable;
@end
