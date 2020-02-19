//
//  RESTRequestConfigurator.h
//
//
// 21/05/2018.
//
//

@import AFNetworking.AFURLRequestSerialization;

#import "RequestConfigurator.h"

@interface RESTRequestConfigurator : AFHTTPRequestSerializer <RequestConfigurator>
@property (nonatomic, copy, readonly) NSURL *baseURL;
@property (nonatomic, copy, readonly) NSString *apiPath;
- (instancetype)initWithBaseURL:(NSURL *)baseURL apiPath:(NSString *)apiPath;
@end
