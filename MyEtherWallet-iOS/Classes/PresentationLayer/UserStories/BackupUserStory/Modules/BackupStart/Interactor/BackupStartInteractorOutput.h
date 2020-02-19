//
//  BackupStartInteractorOutput.h
//

@import Foundation;

@protocol BackupStartInteractorOutput <NSObject>
- (void) mnemonicsDidReceived:(NSArray <NSString *> *)mnemonics;
@end
