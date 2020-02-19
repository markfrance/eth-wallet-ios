//
//  FiatPricesServiceImplementation.h
//
//
// 02/07/2018.
//
//

#import "FiatPricesService.h"

@class FiatPricesOperationFactory;
@protocol OperationScheduler;

@interface FiatPricesServiceImplementation : NSObject <FiatPricesService>
@property (nonatomic, strong) FiatPricesOperationFactory *fiatPricesOperationFactory;
@property (nonatomic, strong) id <OperationScheduler> operationScheduler;
@end
