//
//  HomeTableViewCellObject.h
//
//
// 22/05/2018.
//
//

@import Foundation;
@import Nimbus.NimbusModels;

@class TokenPlainObject;

@interface HomeTableViewCellObject : NSObject <NINibCellObject, NICellObject>
@property (nonatomic, strong, readonly) NSString *tokenName;
@property (nonatomic, strong, readonly) NSString *tokenPrice;
@property (nonatomic, strong, readonly) NSString *tokenBalance;
@property (nonatomic, strong, readonly) NSString *fiatBalance;
@property (nonatomic, strong, readonly) TokenPlainObject *token;
+ (instancetype) objectWithToken:(TokenPlainObject *)token;
@end

