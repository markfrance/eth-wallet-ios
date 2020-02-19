//
//  SecurityAppDelegate.h
//
//
// 06/11/2018.
//
//

@import UIKit;

@class SecurityRouter;
@protocol SecurityService;

NS_ASSUME_NONNULL_BEGIN

@interface SecurityAppDelegate : NSObject <UIApplicationDelegate>
@property (nonatomic, strong) SecurityRouter *securityRouter;
@property (nonatomic, strong) id <SecurityService> securityService;
@end

NS_ASSUME_NONNULL_END
