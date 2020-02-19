//
//  StartViewController.h
//
//
// 14/04/2018.
//
//

@import UIKit;

#import "StartViewInput.h"

@protocol StartViewOutput;

@interface StartViewController : UIViewController <StartViewInput>

@property (nonatomic, strong) id<StartViewOutput> output;

@end
