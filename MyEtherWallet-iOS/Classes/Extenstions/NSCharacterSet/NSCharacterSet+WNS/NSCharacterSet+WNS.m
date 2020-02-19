//
//  NSCharacterSet+WNS.m
//
//
// 25/05/2018.
//
//

#import "NSCharacterSet+WNS.h"

static NSCharacterSet *_characterSet = nil;

@implementation NSCharacterSet (WNS)

+ (NSCharacterSet *) whitespaceAndSpaceAndNewlineCharacterSet
{
  static dispatch_once_t onceToken;
  dispatch_once(&onceToken, ^{
    NSMutableCharacterSet *characterSet = [[NSMutableCharacterSet alloc] init];
    [characterSet addCharactersInString:@" "];
    [characterSet formUnionWithCharacterSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    _characterSet = [characterSet copy];
  });
  return _characterSet;
}

@end
