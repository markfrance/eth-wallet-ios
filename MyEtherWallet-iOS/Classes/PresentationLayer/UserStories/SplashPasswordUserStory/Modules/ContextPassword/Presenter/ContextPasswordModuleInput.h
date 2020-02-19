//
//  ContextPasswordModuleInput.h
//
//
// 11/09/2018.
//
//

@import Foundation;
@import ViperMcFlurryX;

@class AccountPlainObject;

typedef NS_ENUM(short, ContextPasswordType) {
  ContextPasswordTypeBackup       = 0,
  ContextPasswordTypeTransaction  = 1,
  ContextPasswordTypeMessage      = 2,
  ContextPasswordTypeGenerate     = 3,
  ContextPasswordTypeViewBackup   = 4,
};

@protocol ContextPasswordModuleInput <RamblerViperModuleInput>
- (void) configureModuleWithAccount:(AccountPlainObject *)account type:(ContextPasswordType)type;
@end
