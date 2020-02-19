//
//  HomeViewOutput.h
//
//
// 28/04/2018.
//
//

@import Foundation;

@protocol HomeViewOutput <NSObject>
- (void) didTriggerViewReadyEvent;
- (void) didTriggerViewWillAppear;
- (void) didTriggerViewDidDisappear;
- (void) connectAction;
- (void) disconnectAction;
- (void) backupAction;
- (void) searchTermDidChanged:(NSString *)searchTerm;
- (void) infoAction;
- (void) buyEtherAction;
- (void) refreshTokensAction;
- (void) shareAction;
- (void) networkAction;
- (void) mainnetAction;
- (void) ropstenAction;
@end
