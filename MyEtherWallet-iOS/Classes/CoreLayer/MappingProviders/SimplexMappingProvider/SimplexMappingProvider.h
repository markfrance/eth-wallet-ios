//
//  SimplexMappingProvider.h
//
//
// 03/07/2018.
//
//

@import Foundation;

@class EKObjectMapping;
@protocol EntityNameFormatter;

@interface SimplexMappingProvider : NSObject
@property (nonatomic, strong) id<EntityNameFormatter> entityNameFormatter;
- (EKObjectMapping *)mappingForModelClass:(Class)modelClass;
@end
