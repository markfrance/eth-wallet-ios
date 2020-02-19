//
//  ConfirmationNavigationViewController.h
//
//
// 17/07/2018.
//
//

@import UIKit;

#import "ConfirmationNavigationViewInput.h"

@protocol ConfirmationNavigationViewOutput;

@interface ConfirmationNavigationViewController : UINavigationController <ConfirmationNavigationViewInput>
@property (nonatomic, strong) id <ConfirmationNavigationViewOutput> output;
@property (nonatomic, strong) id <UIViewControllerTransitioningDelegate> customTransitioningDelegate;
@end
