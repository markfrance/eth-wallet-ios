//
//  StartAssembly.h
//
//
// 14/04/2018.
//
//

@import RamblerTyphoonUtils.AssemblyCollector;

#import "ModuleAssemblyBase.h"

@class ModuleFactoriesAssembly;

@interface StartAssembly : ModuleAssemblyBase <RamblerInitialAssembly>
@property (nonatomic, strong, readonly) ModuleFactoriesAssembly *moduleFactoriesAssembly;
@end
