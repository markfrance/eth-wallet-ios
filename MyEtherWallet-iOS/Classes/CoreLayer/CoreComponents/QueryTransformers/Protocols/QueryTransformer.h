//
//  QueryTransformer.h
//
//
// 21/05/2018.
//
//

@import Foundation;

@protocol QueryTransformer <NSObject>
- (NSDictionary *)deriveUrlParametersFromQuery:(id)query;
@end
