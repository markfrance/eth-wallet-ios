//
//  MEWConnectResponseMapper.h
//
//
// 03/05/2018.
//
//

@import Foundation;

#import "ResponseMapper.h"

@class MEWMappingProvider;

@interface MEWConnectResponseMapper : NSObject <ResponseMapper>
@property (nonatomic, strong) MEWMappingProvider *provider;

- (instancetype) initWithMappingProvider:(MEWMappingProvider *)mappingProvider;
@end
