//
//  RestoreSeedModuleOutput.h
//
//
// 04/11/2018.
//
//

@import Foundation;
@import ViperMcFlurryX;

@protocol RestoreSeedModuleOutput <RamblerViperModuleOutput>
- (void) mnemonicsDidRestoredWithPassword:(NSString *)password;
@end
