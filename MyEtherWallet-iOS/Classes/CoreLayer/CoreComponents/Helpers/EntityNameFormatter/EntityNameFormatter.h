//
//  EntityNameFormatter.h
//
//
// 22/05/2018.
//
//

@import Foundation;

@protocol EntityNameFormatter <NSObject>
- (Class)transformToClassEntityName:(NSString *)entityName;
- (NSString *)transformToEntityNameClass:(Class)entityClass;
@end
