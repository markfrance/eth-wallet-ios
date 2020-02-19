//
//  BackupInfoViewController.h
//

@import UIKit;

#import "BackupInfoViewInput.h"

@protocol BackupInfoViewOutput;

@interface BackupInfoViewController : UIViewController <BackupInfoViewInput>

@property (nonatomic, strong) id<BackupInfoViewOutput> output;

@end
