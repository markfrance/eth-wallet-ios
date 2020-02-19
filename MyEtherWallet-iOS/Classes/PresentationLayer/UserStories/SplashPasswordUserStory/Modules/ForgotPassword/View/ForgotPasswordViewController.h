//
//  ForgotPasswordViewController.h
//

@import UIKit;

#import "ForgotPasswordViewInput.h"

@protocol ForgotPasswordViewOutput;

@interface ForgotPasswordViewController : UIViewController <ForgotPasswordViewInput>
@property (nonatomic, strong) id<ForgotPasswordViewOutput> output;
@property (nonatomic, strong) id <UIViewControllerTransitioningDelegate> customTransitioningDelegate;
@end
