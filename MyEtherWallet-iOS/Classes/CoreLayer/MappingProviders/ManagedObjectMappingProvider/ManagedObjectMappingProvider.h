//
//  ManagedObjectMappingProvider.h
//
//
// 22/05/2018.
//
//

@import Foundation;

@class EKManagedObjectMapping;
@protocol EntityNameFormatter;

@interface ManagedObjectMappingProvider : NSObject
@property (nonatomic, strong) id<EntityNameFormatter> entityNameFormatter;
- (EKManagedObjectMapping *)mappingForManagedObjectModelClass:(Class)managedObjectModelClass;
@end

