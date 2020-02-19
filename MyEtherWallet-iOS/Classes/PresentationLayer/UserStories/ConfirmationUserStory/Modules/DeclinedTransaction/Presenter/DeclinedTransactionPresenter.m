//
//  DeclinedTransactionPresenter.m
//
//
// 28/04/2018.
//
//

#import "DeclinedTransactionPresenter.h"

#import "DeclinedTransactionViewInput.h"
#import "DeclinedTransactionInteractorInput.h"
#import "DeclinedTransactionRouterInput.h"

@implementation DeclinedTransactionPresenter

#pragma mark - DeclinedTransactionModuleInput

- (void) configureModule {
}

#pragma mark - DeclinedTransactionViewOutput

- (void) didTriggerViewReadyEvent {
	[self.view setupInitialState];
}

- (void) closeAction {
  [self.moduleOutput transactionDidRejected];
}

#pragma mark - DeclinedTransactionInteractorOutput

@end
