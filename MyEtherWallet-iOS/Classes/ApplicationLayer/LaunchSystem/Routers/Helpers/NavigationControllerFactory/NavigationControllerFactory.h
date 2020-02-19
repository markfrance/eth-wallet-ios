//
//  NavigationControllerFactory.h
//
//
// 15/04/2018.
//
//

@import Foundation;

@class UINavigationController;

@protocol NavigationControllerFactory <NSObject>
- (UINavigationController *) obtainPreconfiguredNavigationController;
- (UINavigationController *) obtainPreconfiguredAuthorizedNavigationController;
@end
