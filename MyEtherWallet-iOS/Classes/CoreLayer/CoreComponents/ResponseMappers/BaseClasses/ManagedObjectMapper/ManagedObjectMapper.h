//
//  ManagedObjectMapper.h
//
//
// 22/05/2018.
//
//

@import Foundation;

#import "ResponseMapper.h"

@class ManagedObjectMappingProvider;
@protocol ResponseObjectFormatter;
@protocol EntityNameFormatter;

@interface ManagedObjectMapper : NSObject <ResponseMapper>
@property (nonatomic, strong, readonly) ManagedObjectMappingProvider *provider;
@property (nonatomic, strong, readonly) id<ResponseObjectFormatter> responseFormatter;
@property (nonatomic, strong, readonly) id<EntityNameFormatter> entityNameFormatter;
- (instancetype)initWithMappingProvider:(ManagedObjectMappingProvider *)mappingProvider
                responseObjectFormatter:(id <ResponseObjectFormatter>)responseFormatter
                    entityNameFormatter:(id<EntityNameFormatter>)entityNameFormatter;
@end
