//
//  MEWRTCServiceDelegate.h
//
//
// 24/04/2018.
//
//

@import Foundation;

@protocol MEWRTCService;
@class RTCSessionDescription;

@protocol MEWRTCServiceDelegate <NSObject>
- (void) MEWRTCServiceDidUpdateRemoteDescription:(id <MEWRTCService>)rtcService;
- (void) MEWRTCService:(id <MEWRTCService>)rtcService didPrepareAnswer:(RTCSessionDescription *)answer;
- (void) MEWRTCService:(id <MEWRTCService>)rtcService didGenerateAnswerWithType:(NSString *)type sdp:(NSString *)sdp;
- (void) MEWRTCServiceConnectionDidFailed:(id <MEWRTCService>)rtcService;
- (void) MEWRTCServiceConnectionDidConnected:(id <MEWRTCService>)rtcService;
- (void) MEWRTCServiceConnectionDidDisconnected:(id <MEWRTCService>)rtcService;
- (void) MEWRTCServiceDataChannelConnecting:(id <MEWRTCService>)rtcService;
- (void) MEWRTCServiceDataChannelDidOpen:(id <MEWRTCService>)rtcService;
- (void) MEWRTCService:(id <MEWRTCService>)rtcService didReceiveMessage:(NSDictionary *)message;
@end
