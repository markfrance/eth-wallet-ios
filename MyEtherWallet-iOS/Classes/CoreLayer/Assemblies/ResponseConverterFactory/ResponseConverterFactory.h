//
//  ResponseConverterFactory.h
//
//
// 21/05/2018.
//
//

@import Foundation;

@protocol ResponseConverter;

@protocol ResponseConverterFactory <NSObject>
- (id<ResponseConverter>)converterWithType:(NSNumber *)type;
@end

