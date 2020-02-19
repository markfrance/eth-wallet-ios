//
//  MEWMappingProvider.h
//
//
// 03/05/2018.
//
//

@import Foundation;

@class EKObjectMapping;

@interface MEWMappingProvider : NSObject
- (EKObjectMapping *)mappingForModelClass:(Class)modelClass;
@end
