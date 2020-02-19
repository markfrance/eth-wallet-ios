//
//  DeclinedTransactionViewController.h
//
//
// 28/04/2018.
//
//

@import UIKit;

#import "DeclinedTransactionViewInput.h"

@protocol DeclinedTransactionViewOutput;

@interface DeclinedTransactionViewController : UIViewController <DeclinedTransactionViewInput>

@property (nonatomic, strong) id<DeclinedTransactionViewOutput> output;

@end
