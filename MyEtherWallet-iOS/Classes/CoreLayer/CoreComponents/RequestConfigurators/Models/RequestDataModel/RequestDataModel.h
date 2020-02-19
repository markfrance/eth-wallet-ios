//
//  RequestDataModel.h
//
//
// 21/05/2018.
//
//

@import Foundation;

@interface RequestDataModel : NSObject
@property (nonatomic, strong) NSDictionary *HTTPHeaderFields;
@property (nonatomic, strong) NSDictionary *queryParameters;
@property (nonatomic, strong) NSData *bodyData;

- (instancetype)initWithHTTPHeaderFields:(NSDictionary *)HTTPHeaderFields
                         queryParameters:(NSDictionary *)queryParameters
                                bodyData:(NSData *)bodyData;
@end
