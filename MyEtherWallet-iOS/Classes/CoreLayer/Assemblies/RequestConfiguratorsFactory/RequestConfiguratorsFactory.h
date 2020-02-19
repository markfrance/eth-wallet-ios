//
//  RequestConfiguratorsFactory.h
//
//
// 21/05/2018.
//
//

@import Foundation;

#import "RequestConfigurationType.h"

@protocol RequestConfigurator;

@protocol RequestConfiguratorsFactory <NSObject>
- (id<RequestConfigurator>) requestConfiguratorWithType:(NSNumber *)type;
- (id<RequestConfigurator>) requestConfiguratorWithType:(NSNumber *)type url:(NSURL *)url;
@end
