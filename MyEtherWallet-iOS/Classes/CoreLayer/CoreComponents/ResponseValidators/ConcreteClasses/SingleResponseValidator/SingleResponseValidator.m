//
//  SingleResponseValidator.m
//
//
// 21/05/2018.
//
//

#import "SingleResponseValidator.h"

@implementation SingleResponseValidator

- (NSError *)validateServerResponse:(id)response {
  NSError *resultError = nil;
  
  if(![super validateResponseIsDictionaryClass:response error:&resultError]) {
    return resultError;
  }
  
  return resultError;
}

@end
