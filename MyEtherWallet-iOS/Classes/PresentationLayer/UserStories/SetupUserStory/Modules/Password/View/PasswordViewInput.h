//
//  PasswordViewInput.h
//

@import Foundation;

typedef NS_ENUM(short, PasswordScoreTheme) {
  PasswordScoreThemeUnknown = -1,
  PasswordScoreThemeLWeak   = 0,
  PasswordScoreThemeWeak    = 1,
  PasswordScoreThemeSoSo    = 2,
  PasswordScoreThemeGood    = 3,
  PasswordScoreThemeGreat   = 4,
};

@protocol PasswordViewInput <NSObject>
- (void) setupInitialStateWithBackButton:(BOOL)backButton;
- (void) showCrackMeterIfNeeded;
- (void) hideCrackMeter;
- (void) updateScore:(PasswordScoreTheme)score animated:(BOOL)animated;
@end
