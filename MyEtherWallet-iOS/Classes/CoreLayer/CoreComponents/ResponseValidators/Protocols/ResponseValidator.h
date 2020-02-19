//
//  ResponseValidator.h
//
//
// 21/05/2018.
//
//

@import Foundation;

@protocol ResponseValidator <NSObject>
- (NSError *)validateServerResponse:(id)response;
@end

