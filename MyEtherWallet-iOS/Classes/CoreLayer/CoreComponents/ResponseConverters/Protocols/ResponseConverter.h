//
//  ResponseConverter.h
//
//
// 21/05/2018.
//
//

@import Foundation;

@protocol ResponseConverter <NSObject>
- (id) convertFromResponse:(id)response error:(NSError **)error;
@end
