//
//  MessageSignerRouterInput.h
//
//
// 03/05/2018.
//
//

@import Foundation;

@protocol ContextPasswordModuleOutput;
@protocol ConfirmationStoryModuleOutput;
@class AccountPlainObject;

@protocol MessageSignerRouterInput <NSObject>
- (void) openConfirmedMessageWithConfirmationDelegate:(id<ConfirmationStoryModuleOutput>)confirmationDelegate;
- (void) close;
- (void) openContextPasswordWithAccount:(AccountPlainObject *)account moduleOutput:(id <ContextPasswordModuleOutput>)output;

@end
