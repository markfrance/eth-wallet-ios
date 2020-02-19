//
//  SplashPasswordViewController.m
//

@import libextobjc.EXTScope;
#import "SplashPasswordViewController.h"

#import "SplashPasswordViewOutput.h"

#import "ApplicationConstants.h"

#import "PasswordTextField.h"
#import "UIView+LockFrame.h"
#import "UIScreen+ScreenSizeType.h"

static CGFloat const kSplashPasswordShakeAnimationDistance = 10.0;
static CFTimeInterval const kSplashPasswordShakeAnimationDuration = 0.05;
static float const kSplashPasswordShakeAnimationRepeatCount = 3.0;

@interface SplashPasswordViewController () <UITextFieldDelegate>
@property (nonatomic, weak) IBOutlet PasswordTextField *passwordTextField;
@end

@implementation SplashPasswordViewController {
  BOOL _makePasswordTextFieldActive;
}

#pragma mark - LifeCycle

- (void) viewDidLoad {
	[super viewDidLoad];
  self.modalPresentationCapturesStatusBarAppearance = YES;
	[self.output didTriggerViewReadyEvent];
}

- (void) viewWillAppear:(BOOL)animated {
  [super viewWillAppear:animated];
  if (_makePasswordTextFieldActive) {
    [self.passwordTextField becomeFirstResponder];
  }
}

- (void) viewDidAppear:(BOOL)animated {
  [super viewDidAppear:animated];
}

- (void) viewLayoutMarginsDidChange {
  [super viewLayoutMarginsDidChange];
  [self _updatePrefferedContentSize];
}

- (UIStatusBarStyle)preferredStatusBarStyle {
  return UIStatusBarStyleLightContent;
}

#pragma mark - Override

- (void) setCustomTransitioningDelegate:(id<UIViewControllerTransitioningDelegate>)customTransitioningDelegate {
  _customTransitioningDelegate = customTransitioningDelegate;
  self.transitioningDelegate = customTransitioningDelegate;
}

#pragma mark - SplashPasswordViewInput

- (void) setupInitialStateWithAutoControl:(BOOL)autoControl {
  _makePasswordTextFieldActive = autoControl;
  [self _updatePrefferedContentSize];
}

- (void) becomePasswordInputActive {
  _makePasswordTextFieldActive = YES;
  [self.passwordTextField becomeFirstResponder];
}

- (void) shakeInput {
  CABasicAnimation *animation = [CABasicAnimation animationWithKeyPath:@"position"];
  animation.duration = kSplashPasswordShakeAnimationDuration;
  animation.repeatCount = kSplashPasswordShakeAnimationRepeatCount;
  animation.autoreverses = YES;
  animation.fromValue = [NSValue valueWithCGPoint:CGPointMake(self.passwordTextField.center.x - kSplashPasswordShakeAnimationDistance, self.passwordTextField.center.y)];
  animation.toValue = [NSValue valueWithCGPoint:CGPointMake(self.passwordTextField.center.x + kSplashPasswordShakeAnimationDistance, self.passwordTextField.center.y)];
  [self.passwordTextField.layer addAnimation:animation forKey:@"position"];
}

- (void) lockPasswordField {
  [self.passwordTextField setText:nil];
  self.passwordTextField.inputEnabled = NO;
}

- (void) unlockPasswordField {
  self.passwordTextField.inputEnabled = YES;
}

- (void) updateLockWithTimeInterval:(NSTimeInterval)unlockIn {
  NSDateComponentsFormatter *formatter = [[NSDateComponentsFormatter alloc] init];
  [formatter setUnitsStyle:NSDateComponentsFormatterUnitsStylePositional];
  [formatter setAllowedUnits:NSCalendarUnitMinute|NSCalendarUnitSecond];
  [formatter setZeroFormattingBehavior:NSDateComponentsFormatterZeroFormattingBehaviorPad];
  NSString *unlockInText = [formatter stringFromTimeInterval:unlockIn];
  [self.passwordTextField setRightViewText:unlockInText];
}

#pragma mark - IBActions

- (IBAction) passwordDidChanged:(__unused UITextField *)sender {
  
}

- (IBAction) forgotPasswordAction:(__unused UIButton *)sender {
  [self.output forgotPasswordAction];
}

#pragma mark - UITextFieldDelegate

- (BOOL)textField:(PasswordTextField *)textField shouldChangeCharactersInRange:(__unused NSRange)range replacementString:(__unused NSString *)string {
  return textField.inputEnabled;
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField {
  [self.output doneActionWithPassword:textField.text];
  return NO;
}

#pragma mark - Private

- (void) _updatePrefferedContentSize {
  CGRect statusBarFrame = [[UIApplication sharedApplication] statusBarFrame];
  CGRect bounds = self.presentingViewController.view.window.bounds;
  CGSize size = bounds.size;
  size.height -= CGRectGetHeight(statusBarFrame);
  size.height -= kCustomRepresentationTopBigOffset;
  if (!CGSizeEqualToSize(self.preferredContentSize, size)) {
    self.preferredContentSize = size;
  }
}


- (IBAction) resetWallet:(__unused UIButton *)sender {
  [self.output resetWalletAction];
}

- (void) presentResetConfirmation {
  UIAlertController *alert = [UIAlertController alertControllerWithTitle:NSLocalizedString(@"⚠️\nWarning: you can lose your account and funds forever", @"Forgot password screen. Reset wallet alert")
                                                                 message:NSLocalizedString(@"Don't reset if you didn't make a backup, as there will be no way to restore your account after that. Resetting wallet will remove all keys saved in the local vault and bring you back to the app's start screen.", @"Forgot password screen. Reset wallet alert")
                                                          preferredStyle:UIAlertControllerStyleAlert];
  [alert addAction:[UIAlertAction actionWithTitle:NSLocalizedString(@"Cancel", @"Forgot password screen. Reset wallet alert")
                                            style:UIAlertActionStyleCancel
                                          handler:nil]];
  @weakify(self);
  [alert addAction:[UIAlertAction actionWithTitle:NSLocalizedString(@"Reset wallet", @"Forgot password screen. Reset wallet alert")
                                            style:UIAlertActionStyleDestructive
                                          handler:^(__unused UIAlertAction * _Nonnull action) {
    @strongify(self);
    [self.output resetWalletConfirmedAction];
  }]];
  [self presentViewController:alert animated:YES completion:nil];
}

@end
