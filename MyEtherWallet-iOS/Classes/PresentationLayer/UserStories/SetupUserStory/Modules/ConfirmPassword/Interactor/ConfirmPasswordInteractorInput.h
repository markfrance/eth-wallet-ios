//
//  ConfirmPasswordInteractorInput.h
//
//
// 01/05/2018.
//
//

@import Foundation;

@protocol ConfirmPasswordInteractorInput <NSObject>
- (void) configurateWithPassword:(NSString *)password words:(NSArray <NSString *> *)words;
- (void) complareConfirmationPassword:(NSString *)password;
- (void) confirmPasswordWithPassword:(NSString *)password;
@end
