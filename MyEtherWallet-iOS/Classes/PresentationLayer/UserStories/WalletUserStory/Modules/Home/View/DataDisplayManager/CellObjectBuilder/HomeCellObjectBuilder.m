//
//  HomeCellObjectBuilder.m
//
//
// 22/05/2018.
//
//

#import "HomeCellObjectBuilder.h"

#import "HomeTableViewCellObject.h"
#import "HomeEmptyTableViewCellObject.h"

@implementation HomeCellObjectBuilder

- (HomeTableViewCellObject *) buildCellObjectForToken:(TokenPlainObject *)token {
  return [HomeTableViewCellObject objectWithToken:token];
}

- (NSArray <HomeTableViewCellObject *> *) buildCellObjectsForTokens:(NSArray <TokenPlainObject *> *)tokens {
  NSMutableArray *objects = [[NSMutableArray alloc] initWithCapacity:[tokens count]];
  for (TokenPlainObject *token in tokens) {
    [objects addObject:[self buildCellObjectForToken:token]];
  }
  return [objects copy];
}

- (HomeEmptyTableViewCellObject *) buildEmptyCellObject {
  return [HomeEmptyTableViewCellObject object];
}

@end
