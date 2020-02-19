//
//  SimplexPaymentQuery.h
//

@import Foundation;

@interface SimplexPaymentQuery : NSObject
@property (nonatomic, strong) NSURL *postURL;
@property (nonatomic, strong) NSString *version;
@property (nonatomic, strong) NSString *partner;
@property (nonatomic, strong) NSString *quoteID;
@property (nonatomic, strong) NSString *paymentID;
@property (nonatomic, strong) NSString *userID;
@property (nonatomic, strong) NSString *destinationWallet;
@property (nonatomic, strong) NSURL *returnURL;
@property (nonatomic, strong) NSDecimalNumber *fiatTotalAmount;
@property (nonatomic, strong) NSDecimalNumber *digitalTotalAmount;
@end
