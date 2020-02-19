//
//  PasswordInteractorOutput.h
//

@import Foundation;

@protocol PasswordInteractorOutput <NSObject>
- (void) updateScore:(int)score;
- (void) confirmPassword:(NSString *)password words:(NSArray <NSString *> *)words;
@end
