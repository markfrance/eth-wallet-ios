//
//  TickerResponseConverterImplementation.m
//
//
// 02/07/2018.
//
//

#import "TickerResponseConverterImplementation.h"

static NSString *const kTickerResponseData  = @"data";
static NSString *const kTickerResult        = @"result";

@implementation TickerResponseConverterImplementation

- (id)convertFromResponse:(id)response error:(__unused NSError *__autoreleasing *)error {
  if ([response isKindOfClass:[NSDictionary class]]) {
    NSDictionary *tickerData = response[kTickerResponseData];
    if ([tickerData isKindOfClass:[NSDictionary class]]) {
      NSMutableArray *ticker = [[NSMutableArray alloc] initWithCapacity:[tickerData count]];
      [tickerData enumerateKeysAndObjectsUsingBlock:^(__unused id _Nonnull key, id _Nonnull obj, __unused BOOL * _Nonnull stop) {
        [ticker addObject:obj];
      }];
      return @{kTickerResult: ticker};
    } else if ([tickerData isKindOfClass:[NSArray class]]) {
      return @{kTickerResult: tickerData};
    }
  }
  return @{kTickerResult: response};
}

@end
