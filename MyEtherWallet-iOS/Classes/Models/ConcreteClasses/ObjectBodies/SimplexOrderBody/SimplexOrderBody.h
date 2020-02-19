//
//  SimplexOrderBody.h
//

@import Foundation;

@interface SimplexOrderBody : NSObject
@property (nonatomic, strong) NSString *userID;
@property (nonatomic, strong) NSString *walletAddress;
@property (nonatomic, strong) NSDecimalNumber *fiatAmount;
@property (nonatomic, strong) NSDecimalNumber *digitalAmount;
@property (nonatomic, strong) NSString *appInstallDate;
@end
