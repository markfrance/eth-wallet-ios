//
//  FiatPricesQueryTransformer.m
//
//
// 02/07/2018.
//
//

#import "FiatPricesQueryTransformer.h"

#import "FiatPricesQuery.h"

static NSString *const kFiatPricesQueryFilterParameter  = @"filter";
static NSString *const kFiatPricesQueryFilterJoinSymbol = @",";

@implementation FiatPricesQueryTransformer

- (NSDictionary *)deriveUrlParametersFromQuery:(FiatPricesQuery *)query {
  NSString *filter = [[query.symbols allObjects] componentsJoinedByString:kFiatPricesQueryFilterJoinSymbol];
  return @{kFiatPricesQueryFilterParameter: filter};
}

@end
