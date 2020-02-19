//
//  NetworkOperation.h
//
//
// 21/05/2018.
//
//

#import "AsyncOperation.h"

#import "ChainableOperation.h"

@protocol NetworkClient;

@interface NetworkOperation : AsyncOperation <ChainableOperation>
+ (instancetype)operationWithNetworkClient:(id<NetworkClient>)networkClient;
@end
