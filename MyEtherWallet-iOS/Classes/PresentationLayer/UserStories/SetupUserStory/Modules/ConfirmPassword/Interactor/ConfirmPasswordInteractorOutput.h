//
//  ConfirmPasswordInteractorOutput.h
//
//
// 01/05/2018.
//
//

@import Foundation;

@protocol ConfirmPasswordInteractorOutput <NSObject>
- (void) emptyConfirmationPassword;
- (void) correctPasswords;
- (void) incorrectPassword:(BOOL)error;
- (void) prepareWalletWithPassword:(NSString *)password words:(NSArray <NSString *> *)words;
@end
