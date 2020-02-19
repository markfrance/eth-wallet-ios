//
//  ResponseDeserializersFactory.h
//
//
// 21/05/2018.
//
//

@import Foundation;

#import "ResponseDeserializationType.h"

@protocol ResponseDeserializer;

@protocol ResponseDeserializersFactory <NSObject>
- (id<ResponseDeserializer>)deserializerWithType:(NSNumber *)type;
@end
