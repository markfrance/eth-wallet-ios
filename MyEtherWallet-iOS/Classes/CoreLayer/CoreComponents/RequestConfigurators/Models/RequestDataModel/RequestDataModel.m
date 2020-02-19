//
//  RequestDataModel.m
//
//
// 21/05/2018.
//
//

#import "RequestDataModel.h"

@implementation RequestDataModel

- (instancetype)initWithHTTPHeaderFields:(NSDictionary *)HTTPHeaderFields
                         queryParameters:(NSDictionary *)queryParameters
                                bodyData:(NSData *)bodyData {
  self = [super init];
  
  if (self) {
    _HTTPHeaderFields = HTTPHeaderFields;
    _queryParameters = queryParameters;
    _bodyData = bodyData;
  }
  
  return self;
}

@end
