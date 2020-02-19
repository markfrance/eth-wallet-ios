//
//  SplashPasswordInteractorOutput.h
//

@import Foundation;

@protocol SplashPasswordInteractorOutput <NSObject>
- (void) correctPassword:(NSString *)password;
- (void) incorrectPassword;
- (void) passwordDidUnlocked;
- (void) passwordWillBeUnlockedIn:(NSTimeInterval)unlockIn;
@end
