//
//  RestoreWalletViewInput.h
//
//
// 28/04/2018.
//
//

@import Foundation;

@protocol RestoreWalletViewInput <NSObject>
- (void) setupInitialState;
- (void) enableNext:(BOOL)enable;
- (void) presentIncorrectMnemonicsWarning;
@end
