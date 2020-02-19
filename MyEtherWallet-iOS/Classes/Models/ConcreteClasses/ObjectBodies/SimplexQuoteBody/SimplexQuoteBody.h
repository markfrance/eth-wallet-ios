//
//  SimplexQuoteBody.h
//

@import Foundation;

@interface SimplexQuoteBody : NSObject
@property (nonatomic, strong) NSString *digitalCurrency;
@property (nonatomic, strong) NSString *fiatCurrency;
@property (nonatomic, strong) NSString *requestedCurrency;
@property (nonatomic, strong) NSDecimalNumber *requestedAmount;
@end
