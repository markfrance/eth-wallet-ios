//
//  ResponseDeserializer.h
//
//
// 21/05/2018.
//
//

@import Foundation;

typedef void (^ResponseDeserializerCompletionBlock)(NSDictionary *response, NSError *error);

@protocol ResponseDeserializer <NSObject>
- (void)deserializeServerResponse:(NSData *)responseData completionBlock:(ResponseDeserializerCompletionBlock)block;
@end
