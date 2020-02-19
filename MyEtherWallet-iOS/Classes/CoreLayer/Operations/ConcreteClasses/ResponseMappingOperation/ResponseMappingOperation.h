//
//  ResponseMappingOperation.h
//
//
// 21/05/2018.
//
//

#import "AsyncOperation.h"
#import "ChainableOperation.h"

@protocol ResponseMapper;

@interface ResponseMappingOperation : AsyncOperation <ChainableOperation>
+ (instancetype)operationWithResponseMapper:(id<ResponseMapper>)responseMapper
                             mappingContext:(NSDictionary *)context;
@end
