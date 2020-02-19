//
//  MessageSignerInteractorOutput.h
//
//
// 03/05/2018.
//
//

@import Foundation;

@class MEWConnectResponse;

@protocol MessageSignerInteractorOutput <NSObject>
- (void) messageDidSigned:(MEWConnectResponse *)response;
- (void) messageDidFailure;
@end
