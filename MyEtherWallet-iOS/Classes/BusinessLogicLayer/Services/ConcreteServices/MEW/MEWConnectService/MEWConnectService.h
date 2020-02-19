//
//  MEWConnectService.h
//
//
// 24/04/2018.
//
//

@import Foundation;

#import "MEWConnectServiceTypes.h"

@protocol MEWConnectServiceDelegate;
@class RTCSessionDescription;
@class MEWConnectCommand;
@class MEWConnectResponse;

@protocol MEWConnectService <NSObject>
@property (nonatomic, weak) id <MEWConnectServiceDelegate> delegate;
- (BOOL) connectWithData:(NSString *)data;
- (void) disconnect;
- (BOOL) sendMessage:(MEWConnectResponse *)message;
- (MEWConnectStatus) connectionStatus;
@end
