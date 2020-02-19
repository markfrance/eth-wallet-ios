//
//  MessageSignerModuleInput.h
//
//
// 03/05/2018.
//
//

@import Foundation;
@import ViperMcFlurryX;

@class MEWConnectCommand;
@class MasterTokenPlainObject;

@protocol MessageSignerModuleInput <RamblerViperModuleInput>

- (void) configureModuleWithMessage:(MEWConnectCommand *)message masterToken:(MasterTokenPlainObject *)masterToken;

@end
