//
//  MessageSignerViewInput.h
//
//
// 03/05/2018.
//
//

@import Foundation;

@class MEWConnectMessage;

@protocol MessageSignerViewInput <NSObject>
- (void) setupInitialState;
- (void) updateWithMessage:(MEWConnectMessage *)message;
@end
