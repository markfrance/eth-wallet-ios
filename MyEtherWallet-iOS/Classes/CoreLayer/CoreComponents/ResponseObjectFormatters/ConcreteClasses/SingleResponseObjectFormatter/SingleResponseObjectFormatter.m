//
//  SingleResponseObjectFormatter.m
//
//
// 03/07/2018.
//
//

#import "SingleResponseObjectFormatter.h"

static NSString *const kManyResultsKey = @"result";

@implementation SingleResponseObjectFormatter

- (id)formatServerResponse:(id)serverResponse {
  id formattedResponse = serverResponse[kManyResultsKey];
  if ([formattedResponse isKindOfClass:[NSArray class]]) {
    formattedResponse = [((NSArray *)formattedResponse) firstObject];
  }
  return formattedResponse;
}

@end
