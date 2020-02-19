//
//  ConfirmPasswordViewController.h
//
//
// 01/05/2018.
//
//

@import UIKit;

#import "ConfirmPasswordViewInput.h"

@protocol ConfirmPasswordViewOutput;

@interface ConfirmPasswordViewController : UIViewController <ConfirmPasswordViewInput>

@property (nonatomic, strong) id<ConfirmPasswordViewOutput> output;

@end
