//
//  ShareViewController.h
//
//
// 11/10/2018.
//
//

@import UIKit;

#import "ShareViewInput.h"

@protocol ShareViewOutput;

@interface ShareViewController : UIViewController <ShareViewInput>
@property (nonatomic, strong) id<ShareViewOutput> output;
@property (nonatomic, strong) id <UIViewControllerTransitioningDelegate> customTransitioningDelegate;
@end
