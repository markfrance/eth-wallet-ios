//
//  NavigationControllerFactoryImplementation.h
//
//
// 15/04/2018.
//
//

@import UIKit;

#import "NavigationControllerFactory.h"

@interface NavigationControllerFactoryImplementation : NSObject <NavigationControllerFactory>
@property (nonatomic, strong) UIStoryboard *walletStoryboard;
+ (instancetype)factoryWithStoryboard:(UIStoryboard *)storyboard;
@end
