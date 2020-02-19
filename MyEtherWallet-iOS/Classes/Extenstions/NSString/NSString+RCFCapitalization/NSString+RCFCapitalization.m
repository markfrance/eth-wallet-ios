//
//  NSString+RCFCapitalization.m
//
//
// 03/05/2018.
//
//

#import "NSString+RCFCapitalization.h"

@implementation NSString (RCFCapitalization)

- (NSString *)rcf_decapitalizedStringSavingCase {
  if (!self.length) {
    return self;
  }
  NSString *firstSymbol = [self substringToIndex:1];
  return [self stringByReplacingCharactersInRange:NSMakeRange(0, 1)
                                       withString:firstSymbol.lowercaseString];
}

@end
