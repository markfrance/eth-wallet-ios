//
//  AboutViewController.h
//
//
// 25/07/2018.
//
//

@import UIKit;

#import "AboutViewInput.h"

@protocol AboutViewOutput;

@interface AboutViewController : UIViewController <AboutViewInput>

@property (nonatomic, strong) id<AboutViewOutput> output;

@end
