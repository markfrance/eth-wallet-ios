//
//  DeclinedTransactionInteractor.h
//
//
// 28/04/2018.
//
//

#import "DeclinedTransactionInteractorInput.h"

@protocol DeclinedTransactionInteractorOutput;

@interface DeclinedTransactionInteractor : NSObject <DeclinedTransactionInteractorInput>

@property (nonatomic, weak) id<DeclinedTransactionInteractorOutput> output;

@end
