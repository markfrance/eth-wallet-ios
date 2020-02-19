//
//  BackupStartViewController.h
//

@import UIKit;

#import "BackupStartViewInput.h"

@protocol BackupStartViewOutput;

@interface BackupStartViewController : UIViewController <BackupStartViewInput>

@property (nonatomic, strong) id<BackupStartViewOutput> output;

@end
