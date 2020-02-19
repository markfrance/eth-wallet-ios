//
//  NSString+HexNSDecimalNumber.m
//
//
// 04/05/2018.
//
//

#import "NSString+HexNSDecimalNumber.h"
#if BETA
#import "MyEtherWallet_iOS_Beta-Swift.h"
#else
#import "MyEtherWallet_iOS-Swift.h"
#endif

@implementation NSString (HexNSDecimalNumber)

- (NSDecimalNumber *) decimalNumberFromHexRepresentation {
  NSString *decimal = [self hexStringToDecimalString];
  if (decimal) {
    return [NSDecimalNumber decimalNumberWithString:decimal];
  }
  return nil;
}

@end
