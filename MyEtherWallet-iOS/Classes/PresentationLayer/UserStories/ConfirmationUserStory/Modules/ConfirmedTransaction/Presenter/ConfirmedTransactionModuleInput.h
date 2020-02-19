//
//  ConfirmedTransactionModuleInput.h
//
//
// 19/05/2018.
//
//

@import Foundation;
@import ViperMcFlurryX;

@protocol ConfirmedTransactionModuleInput <RamblerViperModuleInput>
- (void) configureModuleForTransaction;
- (void) configureModuleForMessage;
@end
