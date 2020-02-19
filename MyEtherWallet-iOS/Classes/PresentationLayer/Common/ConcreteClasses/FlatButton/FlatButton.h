//
//  FlatButton.h
//
//
// 02/05/2018.
//
//

@import UIKit;

typedef NS_ENUM(short, FlatButtonTheme) {
  FlatButtonThemeUnknown      = 0,
  FlatButtonThemeMain         = 1,
  FlatButtonThemeWhite        = 2,
  FlatButtonThemeLightRed     = 3,
  FlatButtonThemeLightBlue    = 4,
  FlatButtonThemeLighterBlue  = 5,
};

@interface FlatButton : UIButton

@property (nonatomic) IBInspectable short /*FlatButtonTheme*/ theme;
@property (nonatomic) IBInspectable BOOL alternativeDisabledTheme;
@property (nonatomic) IBInspectable BOOL compact;
@property (nonatomic) IBInspectable BOOL forceCompact;
@property (nonatomic) IBInspectable BOOL defineImageRect;
@property (nonatomic) BOOL loading;
@end
