//
//  NSData+Hexadecimal.m
//
//
// 24/04/2018.
//
//

#import "NSData+Hexadecimal.h"

@implementation NSData (Hexadecimal)

- (NSString *)hexadecimalString {
  const unsigned char *dataBuffer = (const unsigned char *)[self bytes];
  
  if (!dataBuffer) {
    return nil;
  }
  
  NSUInteger dataLength  = [self length];
  NSMutableString *hexString  = [NSMutableString stringWithCapacity:(dataLength * 2)];
  
  for (short i = 0; i < dataLength; ++i) {
    [hexString appendFormat:@"%02lx", (unsigned long)dataBuffer[i]];
  }
  
  return [hexString copy];
}

@end
