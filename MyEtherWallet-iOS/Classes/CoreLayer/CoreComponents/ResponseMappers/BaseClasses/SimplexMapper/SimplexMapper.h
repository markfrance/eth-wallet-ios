//
//  SimplexMapper.h
//
//
// 03/07/2018.
//
//

@import Foundation;

#import "ResponseMapper.h"

@class SimplexMappingProvider;
@protocol ResponseObjectFormatter;
@protocol EntityNameFormatter;

@interface SimplexMapper : NSObject
@property (nonatomic, strong, readonly) SimplexMappingProvider *provider;
@property (nonatomic, strong, readonly) id<ResponseObjectFormatter> responseFormatter;
- (instancetype)initWithMappingProvider:(SimplexMappingProvider *)mappingProvider
                responseObjectFormatter:(id <ResponseObjectFormatter>)responseFormatter;
@end
