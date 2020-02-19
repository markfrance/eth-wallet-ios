//
//  MEWConnectFacade.h
//
//
// 19/05/2018.
//
//

@import Foundation;

#import "MEWConnectServiceTypes.h"

@class MEWConnectResponse;

@protocol MEWConnectFacade <NSObject>
- (BOOL) connectWithData:(NSString *)data;
- (void) disconnect;
- (BOOL) sendMessage:(MEWConnectResponse *)message;
- (MEWConnectStatus) connectionStatus;
@end
