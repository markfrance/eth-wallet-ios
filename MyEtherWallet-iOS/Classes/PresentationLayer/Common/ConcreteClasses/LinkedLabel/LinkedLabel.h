//
//  LinkedLabel.h
//
//
// 19/05/2018.
//
//

@import UIKit;

@protocol LinkedLabelDelegate;

@interface LinkedLabel : UILabel
@property (nonatomic, weak) IBOutlet id <LinkedLabelDelegate> delegate;
@end

@protocol LinkedLabelDelegate <NSObject>
- (void) linkedLabel:(LinkedLabel *)label didSelectURL:(NSURL *)url;
@end
