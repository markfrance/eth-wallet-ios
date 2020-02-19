//
//  CacheTransaction.m
//
//
// 22/05/2018.
//
//

#import "CacheTransaction.h"

@implementation CacheTransaction

- (instancetype) initWithObject:(id)object
                   oldIndexPath:(NSIndexPath *)oldIndexPath
               updatedIndexPath:(NSIndexPath *)updatedIndexPath
                     objectType:(NSString *)objectType
                     changeType:(NSUInteger)changeType {
  self = [super init];
  if (self) {
    _object = object;
    _oldIndexPath = oldIndexPath;
    _updatedIndexPath = updatedIndexPath;
    _objectType = objectType;
    _changeType = changeType;
  }
  return self;
}

+ (instancetype)transactionWithObject:(id)object
                         oldIndexPath:(NSIndexPath *)oldIndexPath
                     updatedIndexPath:(NSIndexPath *)updatedIndexPath
                           objectType:(NSString *)objectType
                           changeType:(NSUInteger)changeType {
  return [[[self class] alloc] initWithObject:object
                                 oldIndexPath:oldIndexPath
                             updatedIndexPath:updatedIndexPath
                                   objectType:objectType
                                   changeType:changeType];
}
@end
