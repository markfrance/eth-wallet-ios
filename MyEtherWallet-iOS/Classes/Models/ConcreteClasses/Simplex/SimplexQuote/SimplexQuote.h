//
//  SimplexQuote.h
//
//
// 03/07/2018.
//
//

@import Foundation;

@interface SimplexQuote : NSObject
@property (nonatomic, strong) NSDecimalNumber *digitalAmount;
@property (nonatomic, strong) NSDecimalNumber *fiatBaseAmount;
@property (nonatomic, strong) NSDecimalNumber *fiatAmount;
@property (nonatomic, strong) NSString *quoteID;
@property (nonatomic, strong) NSString *userID;
@end
