//
//  CommonNetworkClient.h
//
//
// 21/05/2018.
//
//

@import Foundation;

#import "NetworkClient.h"

@interface CommonNetworkClient : NSObject <NetworkClient>
@property (nonatomic, strong, readonly) NSURLSession *session;
- (instancetype)initWithURLSession:(NSURLSession *)session;
@end

