//
//  ResponseConvertingType.h
//
//
// 21/05/2018.
//
//

#ifndef ResponseConvertingType_h
#define ResponseConvertingType_h

typedef NS_ENUM(NSUInteger, ResponseConvertingType) {
  ResponseConvertingDisabledType    = 0,
  ResponseConvertingDefaultType     = 1, /*Do nothing*/
  ResponseConvertingTokensType      = 2,
  ResponseConvertingEthereumType    = 3,
  ResponseConvertingTickerType      = 4,
  ResponseConvertingSimplexType     = 5,
};

#endif /* ResponseConvertingType_h */
