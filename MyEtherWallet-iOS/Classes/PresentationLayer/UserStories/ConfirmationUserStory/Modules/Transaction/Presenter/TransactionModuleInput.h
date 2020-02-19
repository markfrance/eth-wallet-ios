//
//  TransactionModuleInput.h
//
//
// 28/04/2018.
//
//

@import Foundation;
@import ViperMcFlurryX;

@class MEWConnectCommand;
@class MasterTokenPlainObject;

@protocol TransactionModuleInput <RamblerViperModuleInput>
- (void) configureModuleWithMessage:(MEWConnectCommand *)command masterToken:(MasterTokenPlainObject *)masterToken;
@end
