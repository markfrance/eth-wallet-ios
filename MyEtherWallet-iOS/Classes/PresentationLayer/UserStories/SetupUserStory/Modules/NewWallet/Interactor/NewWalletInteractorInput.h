//
//  NewWalletInteractorInput.h
//
//
// 28/04/2018.
//
//

@import Foundation;

@protocol NewWalletInteractorInput <NSObject>
- (void) createNewWalletWithPassword:(NSString *)password words:(NSArray <NSString *> *)words;
@end
