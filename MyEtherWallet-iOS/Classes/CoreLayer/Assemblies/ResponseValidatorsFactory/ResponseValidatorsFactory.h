//
//  ResponseValidatorsFactory.h
//
//
// 21/05/2018.
//
//

@import Foundation;

#import "ResponseValidationType.h"

@protocol ResponseValidator;

@protocol ResponseValidatorsFactory <NSObject>
- (id<ResponseValidator>)validatorWithType:(NSNumber *)type;
@end
