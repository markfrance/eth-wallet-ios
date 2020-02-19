//
//  StatusButton.m
//
//
// 28/05/2018.
//
//

#import "StatusButton.h"

@implementation StatusButton

- (void)awakeFromNib {
  [super awakeFromNib];
  //To apply style
  [self setTitle:[self titleForState:UIControlStateNormal] forState:UIControlStateNormal];
}

- (void)setTitle:(NSString *)title forState:(UIControlState)state {
  UIColor *textColor = [self titleColorForState:state];
  if (!textColor) {
    textColor = [self titleColorForState:UIControlStateNormal];
  }
  NSDictionary *attributes = @{NSFontAttributeName: self.titleLabel.font,
                               NSForegroundColorAttributeName: textColor,
                               NSKernAttributeName: @(0.4)};
  NSAttributedString *attributedTitle = [[NSAttributedString alloc] initWithString:title attributes:attributes];
  [self setAttributedTitle:attributedTitle forState:state];
}

@end
