//
//  SimplexHeadersBuilder.m
//
//
// 03/07/2018.
//
//

#import "SimplexHeadersBuilder.h"

@implementation SimplexHeadersBuilder

- (NSDictionary *)build {
  NSMutableDictionary *headers = [[super build] mutableCopy];
  [headers addEntriesFromDictionary:self.additionalHeaders];
  return headers;
}

@end
