//
//  PasswordViewController.h
//

@import UIKit;

#import "PasswordViewInput.h"

@protocol PasswordViewOutput;

@interface PasswordViewController : UIViewController <PasswordViewInput>

@property (nonatomic, strong) id<PasswordViewOutput> output;

@end
