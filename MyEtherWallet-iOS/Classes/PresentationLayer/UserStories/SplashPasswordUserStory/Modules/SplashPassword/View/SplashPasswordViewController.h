//
//  SplashPasswordViewController.h
//

@import UIKit;

#import "SplashPasswordViewInput.h"

@protocol SplashPasswordViewOutput;

@interface SplashPasswordViewController : UIViewController <SplashPasswordViewInput>
@property (nonatomic, strong) id <SplashPasswordViewOutput> output;
@property (nonatomic, strong) id <UIViewControllerTransitioningDelegate> customTransitioningDelegate;
@end
