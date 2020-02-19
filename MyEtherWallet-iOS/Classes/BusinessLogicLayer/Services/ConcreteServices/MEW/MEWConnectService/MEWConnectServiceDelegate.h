//
//  MEWConnectServiceDelegate.h
//
//
// 24/04/2018.
//
//

@import Foundation;

@protocol MEWConnectService;

@class RTCSessionDescription;
@class MEWConnectCommand;

@protocol MEWConnectServiceDelegate <NSObject>
- (void) MEWConnectDidConnected:(id <MEWConnectService>)mewConnect;
- (void) MEWConnectDidReceiveError:(id <MEWConnectService>)mewConnect;
- (void) MEWConnect:(id <MEWConnectService>)mewConnect didReceiveMessage:(MEWConnectCommand *)message;
- (void) MEWConnectDidDisconnectedByTimeout:(id <MEWConnectService>)mewConnect;
- (void) MEWConnectDidDisconnected:(id <MEWConnectService>)mewConnect;
@end
