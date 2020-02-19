//
//  RestorePrepareViewOutput.h
//
//
// 18/02/2019.
//  Copyright © 2019 MyEtherWallet, Inc.. All rights reserved.
//

@import Foundation;

@protocol RestorePrepareViewOutput <NSObject>
- (void) didTriggerViewReadyEvent;
- (void) continueAction;
@end
