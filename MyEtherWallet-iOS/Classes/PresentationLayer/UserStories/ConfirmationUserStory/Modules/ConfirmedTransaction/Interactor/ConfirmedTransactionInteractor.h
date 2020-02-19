//
//  ConfirmedTransactionInteractor.h
//
//
// 19/05/2018.
//
//

#import "ConfirmedTransactionInteractorInput.h"

@protocol ConfirmedTransactionInteractorOutput;

@interface ConfirmedTransactionInteractor : NSObject <ConfirmedTransactionInteractorInput>

@property (nonatomic, weak) id<ConfirmedTransactionInteractorOutput> output;

@end
