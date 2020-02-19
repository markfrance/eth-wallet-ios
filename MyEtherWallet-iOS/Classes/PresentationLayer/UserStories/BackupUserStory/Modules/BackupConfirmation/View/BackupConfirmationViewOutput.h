//
//  BackupConfirmationViewOutput.h
//

@import Foundation;

@protocol BackupConfirmationViewOutput <NSObject>
- (void) didTriggerViewReadyEvent;
- (void) didSelectAnswers:(NSArray <NSString *>*)vector;
- (void) finishAction;
- (void) didTriggerViewWillAppearEvent;
- (void) didTriggerViewWillDisappearEvent;
@end
