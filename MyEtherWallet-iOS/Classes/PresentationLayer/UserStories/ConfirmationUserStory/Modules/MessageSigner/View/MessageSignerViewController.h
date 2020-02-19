//
//  MessageSignerViewController.h
//
//
// 03/05/2018.
//
//

@import UIKit;

#import "MessageSignerViewInput.h"

@protocol MessageSignerViewOutput;

@interface MessageSignerViewController : UIViewController <MessageSignerViewInput>
@property (nonatomic, strong) id<MessageSignerViewOutput> output;
@end
