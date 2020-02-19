//
//  ManyResponseValidator.m
//
//
// 21/05/2018.
//
//

#import "ManyResponseValidator.h"

@implementation ManyResponseValidator

- (NSError *)validateServerResponse:(id)response {
  NSError *resultError = nil;
  
  if(![super validateResponseIsArrayClass:response error:&resultError]) {
    return resultError;
  } else {
    return nil;
  }
  
  return resultError;
}

@end
