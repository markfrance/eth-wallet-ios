//
//  PasswordTextField.h
//
//
// 01/05/2018.
//
//

@import UIKit;

typedef NS_ENUM(short, PasswordTextFieldTheme) {
  PasswordTextFieldThemeDefault,
  PasswordTextFieldThemeRed,
  PasswordTextFieldThemeDisabled,
};

@interface PasswordTextField : UITextField
@property (nonatomic) PasswordTextFieldTheme theme;
@property (nonatomic) BOOL inputEnabled;
- (void) setRightViewText:(NSString *)text;
@end
