//
//  TransactionRouterInput.h
//
//
// 28/04/2018.
//
//

@import Foundation;

@protocol ContextPasswordModuleOutput;
@protocol ConfirmationStoryModuleOutput;
@class AccountPlainObject;

#import "ConfirmationNavigationModuleInput.h"

@protocol TransactionRouterInput <NSObject>
- (void) openConfirmedTransactionWithConfirmationDelegate:(id<ConfirmationStoryModuleOutput>)confirmationDelegate;
- (void) openDeclinedTransactionWithConfirmationDelegate:(id<ConfirmationStoryModuleOutput>)confirmationDelegate;
- (void) close;
- (void) openContextPasswordWithAccount:(AccountPlainObject *)account moduleOutput:(id <ContextPasswordModuleOutput>)output;
@end
