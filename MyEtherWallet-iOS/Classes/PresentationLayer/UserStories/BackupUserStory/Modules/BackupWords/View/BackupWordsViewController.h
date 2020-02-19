//
//  BackupWordsViewController.h
//

@import UIKit;

#import "BackupWordsViewInput.h"

@protocol BackupWordsViewOutput;

@interface BackupWordsViewController : UIViewController <BackupWordsViewInput>

@property (nonatomic, strong) id<BackupWordsViewOutput> output;

@end
