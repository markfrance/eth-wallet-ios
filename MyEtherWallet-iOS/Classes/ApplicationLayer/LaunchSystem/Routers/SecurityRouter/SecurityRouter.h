//
//  SecurityRouter.h
//
//
// 06/11/2018.
//
//

@import Foundation;

@class RamblerViperModuleFactory;

@protocol SecurityService;
@protocol AccountsService;
@protocol Ponsomizer;

NS_ASSUME_NONNULL_BEGIN

@interface SecurityRouter : NSObject
@property (nonatomic, strong) id <SecurityService> securityService;
@property (nonatomic, strong) id <AccountsService> accountsService;
@property (nonatomic, strong) id <Ponsomizer> ponsomizer;
@property (nonatomic, strong) RamblerViperModuleFactory *splashPasswordFactory;
- (instancetype) initWithWindow:(UIWindow *)window;
- (void) openSecureView;
- (void) closeSecureView;
- (void) openPasswordProtectionWithCompletion:(void (^ __nullable)(void))completion;
@end

NS_ASSUME_NONNULL_END
