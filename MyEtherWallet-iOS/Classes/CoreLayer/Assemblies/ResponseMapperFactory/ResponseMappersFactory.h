//
//  ResponseMappersFactory.h
//
//
// 03/05/2018.
//
//

@import Foundation;

#import "ResponseMappingType.h"

@protocol ResponseMapper;

@protocol ResponseMappersFactory <NSObject>
- (id<ResponseMapper>)mapperWithType:(NSNumber *)type;
@end
