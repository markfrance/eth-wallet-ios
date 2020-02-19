//
//  ResponseObjectFormatter.h
//
//
// 22/05/2018.
//
//

@import Foundation;

@protocol ResponseObjectFormatter <NSObject>
- (id)formatServerResponse:(id)serverResponse;
@end
