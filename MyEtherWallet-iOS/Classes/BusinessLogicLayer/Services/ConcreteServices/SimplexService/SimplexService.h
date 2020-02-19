//
//  SimplexService.h
//
//
// 03/07/2018.
//
//

@import Foundation;

#import "SimplexServiceCurrencyTypes.h"

@class MasterTokenPlainObject;
@class PurchaseHistoryModelObject;
@class PurchaseHistoryPlainObject;
@class SimplexQuote;
@class SimplexOrder;

typedef void(^SimplexServiceQuoteCompletion)(SimplexQuote *quote, NSError *error);
typedef void(^SimplexServiceOrderCompletion)(SimplexOrder *order, NSError *error);
typedef void(^SimplexServiceStatusCompletion)(NSError *error);

@protocol SimplexService <NSObject>
- (void) quoteWithAmount:(NSDecimalNumber *)amount currency:(SimplexServiceCurrencyType)currency prequote:(BOOL)prequote completion:(SimplexServiceQuoteCompletion)completion;
- (void) orderForMasterToken:(MasterTokenPlainObject *)masterToken quote:(SimplexQuote *)quote completion:(SimplexServiceOrderCompletion)completion;
- (void) statusForPurchase:(PurchaseHistoryPlainObject *)purchase completion:(SimplexServiceStatusCompletion)completion;
- (NSArray <PurchaseHistoryModelObject *> *) obtainHistoryForMasterToken:(MasterTokenPlainObject *)masterToken;
- (void) clearCancelledHistoryForMasterToken:(MasterTokenPlainObject *)masterToken;
- (NSURLRequest *) obtainRequestWithOrder:(SimplexOrder *)order forMasterToken:(MasterTokenPlainObject *)masterToken;
@end
