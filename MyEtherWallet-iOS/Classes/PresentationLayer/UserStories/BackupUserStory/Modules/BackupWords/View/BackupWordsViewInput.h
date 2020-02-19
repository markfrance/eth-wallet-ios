//
//  BackupWordsViewInput.h
//

@import Foundation;

@protocol BackupWordsViewInput <NSObject>
- (void) setupInitialStateWithWords:(NSArray <NSString *> *)words readOnly:(BOOL)readOnly;
- (void) showScreenshotAlert;
@end
