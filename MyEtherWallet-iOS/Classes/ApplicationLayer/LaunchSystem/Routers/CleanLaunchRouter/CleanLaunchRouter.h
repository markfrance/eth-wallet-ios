//
//  CleanLaunchRouter.h
//
//
// 15/04/2018.
//
//

@import Foundation;

@class RamblerViperModuleFactory;

@protocol NavigationControllerFactory;
@protocol AccountsService;
@protocol Ponsomizer;
@protocol PropertyAnimatorsFactory;

@interface CleanLaunchRouter : NSObject
@property (nonatomic, strong) id <PropertyAnimatorsFactory> propertyAnimatorsFactory;
@property (nonatomic, strong) id <AccountsService> accountsService;

@property (nonatomic, strong) id <Ponsomizer> ponsomizer;
@property (nonatomic, strong) RamblerViperModuleFactory *splashPasswordFactory;
@property (nonatomic, strong) UIStoryboard *launchStoryboard;
- (instancetype) initWithNavigationControllerFactory:(id<NavigationControllerFactory>)navigationControllerFactory
                                              window:(UIWindow *)window;
- (void) openInitialScreen;
@end
