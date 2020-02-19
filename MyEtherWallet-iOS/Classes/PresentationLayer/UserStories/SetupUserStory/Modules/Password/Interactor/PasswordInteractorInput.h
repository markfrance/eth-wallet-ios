//
//  PasswordInteractorInput.h
//

@import Foundation;

@protocol PasswordInteractorInput <NSObject>
- (void) configureWithWords:(NSArray <NSString *> *)words;
- (void) scorePassword:(NSString *)password;
- (void) confirmPassword;
- (BOOL) isWordsProvided;
@end
