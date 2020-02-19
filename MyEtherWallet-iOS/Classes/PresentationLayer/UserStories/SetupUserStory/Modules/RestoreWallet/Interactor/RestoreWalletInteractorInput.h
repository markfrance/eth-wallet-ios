//
//  RestoreWalletInteractorInput.h
//
//
// 28/04/2018.
//
//

@import Foundation;

@protocol RestoreWalletInteractorInput <NSObject>
- (void) configurate;
- (void) checkMnemonics:(NSString *)mnemonics;
- (void) tryRestore;
@end
