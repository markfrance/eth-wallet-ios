//
//  ResponseDeserializationOperation.h
//
//
// 21/05/2018.
//
//

#import "AsyncOperation.h"

#import "ChainableOperation.h"

@protocol ResponseDeserializer;

@interface ResponseDeserializationOperation : AsyncOperation <ChainableOperation>
+ (instancetype)operationWithResponseDeserializer:(id<ResponseDeserializer>)responseDeserializer;
@end
