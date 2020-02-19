//
//  NSData+ArrayBuffer.m
//
//
// 19/06/2018.
//
//

#import "NSData+ArrayBuffer.h"

@implementation NSData (ArrayBuffer)
- (NSArray <NSNumber *> *) convertToBuffer {
  NSMutableArray *array = [[NSMutableArray alloc] init];
  for (NSInteger i = 0; i < self.length; ++i) {
    uint8_t byte;
    [self getBytes:&byte range:NSMakeRange(i, 1)];
    [array addObject:@(byte)];
  }
  return [array copy];
}
@end
