//
//  HomeCellObjectBuilder.h
//
//
// 22/05/2018.
//
//

@import Foundation;

@class HomeTableViewCellObject;
@class HomeEmptyTableViewCellObject;
@class TokenPlainObject;

@interface HomeCellObjectBuilder : NSObject
- (HomeTableViewCellObject *) buildCellObjectForToken:(TokenPlainObject *)token;
- (NSArray <HomeTableViewCellObject *> *) buildCellObjectsForTokens:(NSArray <TokenPlainObject *> *)tokens;
- (HomeEmptyTableViewCellObject *) buildEmptyCellObject;
@end
