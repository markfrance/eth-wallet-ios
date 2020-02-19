//
//  BackupInfoViewOutput.h
//

@import Foundation;

@protocol BackupInfoViewOutput <NSObject>
- (void) didTriggerViewReadyEvent;
- (void) startAction;
- (void) cancelAction;
@end
