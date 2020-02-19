//
//  ContextPasswordViewController.h
//
//
// 11/09/2018.
//
//

@import UIKit;

#import "ContextPasswordViewInput.h"

@protocol ContextPasswordViewOutput;

@interface ContextPasswordViewController : UIViewController <ContextPasswordViewInput>
@property (nonatomic, strong) id<ContextPasswordViewOutput> output;
@property (nonatomic, strong) id <UIViewControllerTransitioningDelegate> customTransitioningDelegate;
@end
