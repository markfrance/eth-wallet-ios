//
//  RestoreWalletViewController.h
//
//
// 28/04/2018.
//
//

@import UIKit;

#import "RestoreWalletViewInput.h"

@protocol RestoreWalletViewOutput;

@interface RestoreWalletViewController : UIViewController <RestoreWalletViewInput>

@property (nonatomic, strong) id<RestoreWalletViewOutput> output;

@end
