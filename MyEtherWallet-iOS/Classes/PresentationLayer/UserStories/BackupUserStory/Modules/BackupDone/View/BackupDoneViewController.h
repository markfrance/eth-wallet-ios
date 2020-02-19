//
//  BackupDoneViewController.h
//

@import UIKit;

#import "BackupDoneViewInput.h"

@protocol BackupDoneViewOutput;

@interface BackupDoneViewController : UIViewController <BackupDoneViewInput>

@property (nonatomic, strong) id<BackupDoneViewOutput> output;

@end
