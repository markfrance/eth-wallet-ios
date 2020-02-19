//
//  MigrationService.h
//
//
// 23/10/2018.
//
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@protocol MigrationService <NSObject>
- (BOOL) isMigrationNeeded;
- (BOOL) isMigrationNeededForKeychain;
- (BOOL) migrate:(NSError **)error;
- (BOOL) migratekeychain:(NSError **)error;
@end

NS_ASSUME_NONNULL_END
