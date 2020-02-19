//
//  NetworkClient.h
//
//
// 21/05/2018.
//
//

@import Foundation;

static NSString *const NetworkClientErrorDomain = @"com.myetherwallet.mewconnect.networkclient.error-domain";

@class ServerResponseModel;

typedef void(^NetworkClientCompletionBlock)(ServerResponseModel *respodeModel, NSError *error);

@protocol NetworkClient <NSObject>
- (void)sendRequest:(NSURLRequest *)request completionBlock:(NetworkClientCompletionBlock)block;
@end
