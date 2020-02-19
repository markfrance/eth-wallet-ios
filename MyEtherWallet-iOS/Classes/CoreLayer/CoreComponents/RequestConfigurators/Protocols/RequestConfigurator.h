//
//  RequestConfigurator.h
//
//
// 21/05/2018.
//
//

@import Foundation;

@class RequestDataModel;

@protocol RequestConfigurator <NSObject>
- (NSURLRequest *)requestWithMethod:(NSString *)method
                        serviceName:(NSString *)serviceName
                      urlParameters:(NSArray *)urlParameters
                   requestDataModel:(RequestDataModel *)requestDataModel;
@end
