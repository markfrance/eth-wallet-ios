//
//  EntityNameFormatterImplementation.m
//
//
// 22/05/2018.
//
//

#import "EntityNameFormatterImplementation.h"

static NSString *const kEntityClassSuffix = @"ModelObject";

@implementation EntityNameFormatterImplementation

- (Class)transformToClassEntityName:(NSString *)entityName {
  NSString *entityClassName = [entityName stringByAppendingString:kEntityClassSuffix];
  return NSClassFromString(entityClassName);
}

- (NSString *)transformToEntityNameClass:(Class)entityClass {
  NSString *entityClassString = NSStringFromClass(entityClass);
  NSRange suffixRange = NSMakeRange(entityClassString.length - kEntityClassSuffix.length,
                                    kEntityClassSuffix.length);
  NSString *entityName = [entityClassString stringByReplacingCharactersInRange:suffixRange
                                                                    withString:@""];
  return entityName;
}

@end
