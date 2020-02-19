//
//  SettingsViewController.h
//
//
// 28/04/2018.
//
//

@import UIKit;

#import "SettingsViewInput.h"

@protocol SettingsViewOutput;

@interface SettingsViewController : UIViewController <SettingsViewInput>

@property (nonatomic, strong) id<SettingsViewOutput> output;

@end
