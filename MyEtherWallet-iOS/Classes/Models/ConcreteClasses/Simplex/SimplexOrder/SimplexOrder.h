//
//  SimplexOrder.h
//
//
// 04/07/2018.
//
//

@import Foundation;

@interface SimplexOrder : NSObject
@property (nonatomic, strong) NSURL *postURL;
@property (nonatomic, strong) NSURL *returnURL;
@property (nonatomic, strong) NSString *apiVersion;
@property (nonatomic, strong) NSString *partner;
@property (nonatomic, strong) NSString *quoteID;
@property (nonatomic, strong) NSString *paymentID;
@property (nonatomic, strong) NSString *userID;
@property (nonatomic, strong) NSDecimalNumber *fiatTotalAmount;
@property (nonatomic, strong) NSDecimalNumber *digitalTotalAmount;
@end
