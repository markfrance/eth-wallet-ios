//
//  ResponseValidationOperation.h
//
//
// 21/05/2018.
//
//

#import "AsyncOperation.h"

#import "ChainableOperation.h"

@protocol ResponseValidator;

@interface ResponseValidationOperation : AsyncOperation <ChainableOperation>
+ (instancetype)operationWithResponseValidator:(id<ResponseValidator>)responseValidator;
@end
