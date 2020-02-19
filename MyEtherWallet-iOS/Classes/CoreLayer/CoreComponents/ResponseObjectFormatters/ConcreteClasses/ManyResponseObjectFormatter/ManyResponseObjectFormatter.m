//
//  ManyResponseObjectFormatter.m
//
//
// 22/05/2018.
//
//

#import "ManyResponseObjectFormatter.h"

static NSString *const kManyResultsKey = @"result";

@implementation ManyResponseObjectFormatter

- (id)formatServerResponse:(id)serverResponse {
  NSArray *formattedResponse = serverResponse[kManyResultsKey];
  if (![formattedResponse isKindOfClass:[NSArray class]]) {
    formattedResponse = @[formattedResponse];
  }
  return formattedResponse;
}

@end
