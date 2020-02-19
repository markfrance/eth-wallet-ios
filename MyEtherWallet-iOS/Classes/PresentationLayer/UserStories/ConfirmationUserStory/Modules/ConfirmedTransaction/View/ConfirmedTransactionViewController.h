//
//  ConfirmedTransactionViewController.h
//
//
// 19/05/2018.
//
//

@import UIKit;

#import "ConfirmedTransactionViewInput.h"

@protocol ConfirmedTransactionViewOutput;

@interface ConfirmedTransactionViewController : UIViewController <ConfirmedTransactionViewInput>

@property (nonatomic, strong) id<ConfirmedTransactionViewOutput> output;

@end
