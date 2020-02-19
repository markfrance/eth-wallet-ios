//
//  NSArray+Data.m
//
//
// 19/06/2018.
//
//

#import "NSArray+Data.h"

@implementation NSArray (Data)

- (NSData *) convertToData {
  NSMutableData *data = [[NSMutableData alloc] initWithCapacity:[self count]];
  for (NSNumber *byteNumber in self) {
    uint8_t byte = [byteNumber unsignedCharValue];
    [data appendBytes:&byte length:sizeof(uint8_t)];
  }
  return [data copy];
}

@end
