//
//  ToastView.h
//
//
// 3/21/19.
//
//

@import UIKit;

@interface ToastView : UIView
+ (instancetype) shared;
- (void) showWithImage:(UIImage *)image title:(NSString *)title;
@end
