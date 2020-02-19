//
//  BackupWordsViewOutput.h
//

@import Foundation;

@protocol BackupWordsViewOutput <NSObject>
- (void) didTriggerViewReadyEvent;
- (void) nextAction;
- (void) closeAction;
- (void) didTriggerViewWillAppearEvent;
- (void) didTriggerViewWillDisappearEvent;
@end
