//
//  SimplexServiceCurrencyType.h
//
//
// 03/07/2018.
//
//

#ifndef SimplexServiceCurrencyType_h
#define SimplexServiceCurrencyType_h

@import Foundation;

typedef NS_ENUM(short, SimplexServiceCurrencyType) {
  SimplexServiceCurrencyTypeUSD  = 0,
  SimplexServiceCurrencyTypeETH  = 1,
};

NS_INLINE NSString *NSStringFromSimplexServiceCurrencyType(SimplexServiceCurrencyType type) {
  switch (type) {
    case SimplexServiceCurrencyTypeETH: {
      return @"ETH";
      break;
    }
    case SimplexServiceCurrencyTypeUSD:
      return @"USD";
    default: {
      break;
    }
  }
}

#endif /* SimplexServiceCurrencyType_h */
