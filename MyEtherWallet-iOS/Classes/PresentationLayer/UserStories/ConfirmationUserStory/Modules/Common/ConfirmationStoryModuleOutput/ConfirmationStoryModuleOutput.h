//
//  ConfirmationStoryModuleOutput.h
//
//
// 21/07/2018.
//
//

@import Foundation;
@import ViperMcFlurryX;

@protocol ConfirmationStoryModuleOutput <RamblerViperModuleOutput>
- (void) transactionDidSigned;
- (void) transactionDidRejected;
@end
