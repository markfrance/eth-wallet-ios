//
//  ContextPasswordInteractorOutput.h
//

@import Foundation;

@protocol ContextPasswordInteractorOutput <NSObject>
- (void) correctPassword:(NSString *)password;
- (void) incorrectPassword;
- (void) passwordDidUnlocked;
- (void) passwordWillBeUnlockedIn:(NSTimeInterval)unlockIn;
@end
