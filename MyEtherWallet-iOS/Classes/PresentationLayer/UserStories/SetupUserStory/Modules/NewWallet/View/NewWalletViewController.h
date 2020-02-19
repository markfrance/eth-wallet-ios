//
//  NewWalletViewController.h
//
//
// 28/04/2018.
//
//

@import UIKit;

#import "NewWalletViewInput.h"

@protocol NewWalletViewOutput;

@interface NewWalletViewController : UIViewController <NewWalletViewInput>

@property (nonatomic, strong) id<NewWalletViewOutput> output;

@end
