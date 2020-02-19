//
//  CacheRequest.m
//
//
// 22/05/2018.
//
//

#import "CacheRequest.h"

@implementation CacheRequest

- (instancetype) initWithPredicate:(NSPredicate *)predicate
                   sortDescriptors:(NSArray *)sortDescriptors
                       objectClass:(Class)objectClass
                       filterValue:(NSString *)filterValue
                ignoringProperties:(NSArray <NSString *> *)ignoringProperties
                          sections:(BOOL)sections {
  self = [super init];
  if (self) {
    _predicate = predicate;
    _sortDescriptors = sortDescriptors;
    _objectClass = objectClass;
    _filterValue = filterValue;
    _ignoringProperties = ignoringProperties;
    _sections = sections;
  }
  return self;
}

+ (instancetype)requestWithPredicate:(NSPredicate *)predicate
                     sortDescriptors:(NSArray *)sortDescriptors
                         objectClass:(Class)objectClass
                         filterValue:(NSString *)filterValue
                  ignoringProperties:(NSArray <NSString *> *)ignoringProperties {
  return [[[self class] alloc] initWithPredicate:predicate
                                 sortDescriptors:sortDescriptors
                                     objectClass:objectClass
                                     filterValue:filterValue
                              ignoringProperties:ignoringProperties
                                        sections:NO];
}

+ (instancetype)requestWithPredicate:(NSPredicate *)predicate
                     sortDescriptors:(NSArray *)sortDescriptors
                         objectClass:(Class)objectClass
                         filterValue:(NSString *)filterValue
                  ignoringProperties:(NSArray <NSString *> *)ignoringProperties
                            sections:(BOOL)section {
  return [[[self class] alloc] initWithPredicate:predicate
                                 sortDescriptors:sortDescriptors
                                     objectClass:objectClass
                                     filterValue:filterValue
                              ignoringProperties:ignoringProperties
                                        sections:section];
}

@end
