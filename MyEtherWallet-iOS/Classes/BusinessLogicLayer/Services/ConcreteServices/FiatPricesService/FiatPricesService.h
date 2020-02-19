//
//  FiatPricesService.h
//
//
// 02/07/2018.
//
//

@import Foundation;

typedef void(^FiatPricesServiceCompletion)(NSError *error);

@protocol FiatPricesService <NSObject>
- (void) updateFiatPricesWithCompletion:(FiatPricesServiceCompletion)completion;
@end
