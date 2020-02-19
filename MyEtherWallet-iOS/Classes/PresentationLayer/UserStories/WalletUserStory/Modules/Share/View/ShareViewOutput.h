//
//  ShareViewOutput.h
//
//
// 11/10/2018.
//
//

@import Foundation;

@protocol ShareViewOutput <NSObject>
- (void) didTriggerViewReadyEvent;
- (void) didTriggerViewWillAppearEvent;
- (void) didTriggerViewWillDisappearEvent;
- (void) closeAction;
- (void) copyAction;
- (void) shareAction;
@end
