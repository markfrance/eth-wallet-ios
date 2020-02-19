//
//  NSNumberFormatter+USD.m
//
//
// 11/05/2018.
//
//

#import "NSNumberFormatter+USD.h"

@implementation NSNumberFormatter (USD)
+ (instancetype) usdFormatter {
  NSNumberFormatter *formatter = [[NSNumberFormatter alloc] init];
  formatter.numberStyle = NSNumberFormatterCurrencyStyle;
  formatter.currencyCode = @"USD";
  formatter.locale = [NSLocale localeWithLocaleIdentifier:@"en_US"];
  return formatter;
}
@end
