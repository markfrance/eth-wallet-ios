//
//  DeclinedTransactionPresenter.h
//
//
// 28/04/2018.
//
//

#import "DeclinedTransactionViewOutput.h"
#import "DeclinedTransactionInteractorOutput.h"
#import "DeclinedTransactionModuleInput.h"
#import "ConfirmationStoryModuleOutput.h"

@protocol DeclinedTransactionViewInput;
@protocol DeclinedTransactionInteractorInput;
@protocol DeclinedTransactionRouterInput;

@interface DeclinedTransactionPresenter : NSObject <DeclinedTransactionModuleInput, DeclinedTransactionViewOutput, DeclinedTransactionInteractorOutput>

@property (nonatomic, weak) id <DeclinedTransactionViewInput> view;
@property (nonatomic, strong) id <DeclinedTransactionInteractorInput> interactor;
@property (nonatomic, strong) id <DeclinedTransactionRouterInput> router;
@property (nonatomic, weak) id <ConfirmationStoryModuleOutput> moduleOutput;
@end
