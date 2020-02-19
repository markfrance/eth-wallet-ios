//
//  RestoreWalletInteractorOutput.h
//
//
// 28/04/2018.
//
//

@import Foundation;

@protocol RestoreWalletInteractorOutput <NSObject>
- (void) allowRestore;
- (void) disallowRestore;
- (void) openPasswordWithWords:(NSArray <NSString *> *)words;
- (void) restoreNotPossible;
@end
