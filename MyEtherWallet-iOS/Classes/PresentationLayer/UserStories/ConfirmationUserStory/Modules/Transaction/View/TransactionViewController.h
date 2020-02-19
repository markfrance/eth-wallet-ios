//
//  TransactionViewController.h
//
//
// 28/04/2018.
//
//

@import UIKit;

#import "TransactionViewInput.h"

@protocol TransactionViewOutput;

@interface TransactionViewController : UIViewController <TransactionViewInput>
@property (nonatomic, strong) id <TransactionViewOutput> output;
@end
