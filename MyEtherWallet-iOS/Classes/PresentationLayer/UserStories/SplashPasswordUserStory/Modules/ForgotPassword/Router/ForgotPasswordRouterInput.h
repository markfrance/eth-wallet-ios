//
//  ForgotPasswordRouterInput.h
//

@import Foundation;

@protocol ForgotPasswordRouterInput <NSObject>
- (void) close;
- (void) openRestore;
- (void) unwindToStart;
@end
