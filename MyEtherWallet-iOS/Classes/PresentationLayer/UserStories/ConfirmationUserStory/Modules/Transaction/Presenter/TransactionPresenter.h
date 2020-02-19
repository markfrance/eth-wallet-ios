//
//  TransactionPresenter.h
//
//
// 28/04/2018.
//
//

#import "TransactionViewOutput.h"
#import "TransactionInteractorOutput.h"
#import "TransactionModuleInput.h"
#import "ConfirmationStoryModuleOutput.h"

@protocol TransactionViewInput;
@protocol TransactionInteractorInput;
@protocol TransactionRouterInput;

@interface TransactionPresenter : NSObject <TransactionModuleInput, TransactionViewOutput, TransactionInteractorOutput>

@property (nonatomic, weak) id <TransactionViewInput> view;
@property (nonatomic, strong) id <TransactionInteractorInput> interactor;
@property (nonatomic, strong) id <TransactionRouterInput> router;
@property (nonatomic, weak) id <ConfirmationStoryModuleOutput> moduleOutput;
@end
