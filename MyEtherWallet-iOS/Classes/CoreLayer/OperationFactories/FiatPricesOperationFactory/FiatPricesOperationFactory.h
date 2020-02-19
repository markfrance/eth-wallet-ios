//
//  FiatPricesOperationFactory.h
//
//
// 02/07/2018.
//
//

@import Foundation;

@class CompoundOperationBase;
@class NetworkCompoundOperationBuilder;

@protocol QueryTransformer;
@protocol BodyTransformer;
@protocol HeadersBuilder;

@class FiatPricesQuery;

@interface FiatPricesOperationFactory : NSObject
- (instancetype)initWithBuilder:(NetworkCompoundOperationBuilder *)builder
               queryTransformer:(id<QueryTransformer>)queryTransformer
                bodyTransformer:(id<BodyTransformer>)bodyTransformer
                 headersBuilder:(id<HeadersBuilder>)headersBuilder;
- (CompoundOperationBase *) fiatPricesWithQuery:(FiatPricesQuery *)query;
@end
