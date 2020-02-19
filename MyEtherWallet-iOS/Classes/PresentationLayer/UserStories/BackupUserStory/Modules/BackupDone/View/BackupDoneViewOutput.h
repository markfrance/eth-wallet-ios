//
//  BackupDoneViewOutput.h
//

@import Foundation;

@protocol BackupDoneViewOutput <NSObject>
- (void) didTriggerViewReadyEvent;
- (void) doneAction;
@end
