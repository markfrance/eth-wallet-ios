//
//  SecurityService.h
//
//
// 07/11/2018.
//
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@protocol SecurityService <NSObject>
- (void) registerResignActive;
- (void) registerBecomeActive;

- (void) enableForceProtection;
- (void) disableForceProtection;
- (BOOL) obtainProtectionStatus;
- (void) resetOneTimeProtection;

- (void) incorrectAttempt;
- (void) correctAttempt;
- (BOOL) isInputLocked;
- (NSDate * __nullable) unlockTime;
@end

NS_ASSUME_NONNULL_END
