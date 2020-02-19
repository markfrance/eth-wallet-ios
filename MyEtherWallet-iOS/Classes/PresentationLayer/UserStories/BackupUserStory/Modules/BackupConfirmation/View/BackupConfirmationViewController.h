//
//  BackupConfirmationViewController.h
//

@import UIKit;

#import "BackupConfirmationViewInput.h"

@protocol BackupConfirmationViewOutput;

@interface BackupConfirmationViewController : UIViewController <BackupConfirmationViewInput>

@property (nonatomic, strong) id<BackupConfirmationViewOutput> output;

@end
