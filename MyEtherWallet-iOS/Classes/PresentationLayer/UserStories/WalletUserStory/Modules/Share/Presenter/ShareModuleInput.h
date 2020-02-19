//
//  ShareModuleInput.h
//
//
// 11/10/2018.
//
//

@import Foundation;
@import ViperMcFlurryX;

@class MasterTokenPlainObject;

@protocol ShareModuleInput <RamblerViperModuleInput>
- (void) configureModuleWithMasterToken:(MasterTokenPlainObject *)masterToken;
@end
