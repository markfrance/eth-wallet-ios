//
//  RequestConfigurationOperation.h
//
//
// 21/05/2018.
//
//

#import "AsyncOperation.h"

#import "ChainableOperation.h"

@protocol RequestConfigurator;

@interface RequestConfigurationOperation : AsyncOperation <ChainableOperation>
+ (instancetype)operationWithRequestConfigurator:(id<RequestConfigurator>)configurator
                                          method:(NSString *)method
                                     serviceName:(NSString *)serviceName
                                   urlParameters:(NSArray *)urlParameters;
@end
