//
//  BodyTransformer.h
//
//
// 21/05/2018.
//
//

@import Foundation;

@protocol BodyTransformer <NSObject>
- (NSData *) deriveDataFromBody:(id)body;
@end
