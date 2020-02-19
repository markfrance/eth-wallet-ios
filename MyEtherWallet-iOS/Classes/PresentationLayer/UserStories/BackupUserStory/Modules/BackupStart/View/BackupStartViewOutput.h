//
//  BackupStartViewOutput.h
//

@import Foundation;

@protocol BackupStartViewOutput <NSObject>
- (void) didTriggerViewReadyEvent;
- (void) startAction;
@end
