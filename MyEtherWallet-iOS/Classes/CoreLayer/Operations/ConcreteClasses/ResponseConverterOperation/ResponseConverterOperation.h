//
//  ResponseConverterOperation.h
//
//
// 21/05/2018.
//
//

#import "AsyncOperation.h"

#import "ChainableOperation.h"

@protocol ResponseConverter;

@interface ResponseConverterOperation : AsyncOperation <ChainableOperation>
+ (instancetype)operationWithResponseConverter:(id<ResponseConverter>)responseConverter;
@end
