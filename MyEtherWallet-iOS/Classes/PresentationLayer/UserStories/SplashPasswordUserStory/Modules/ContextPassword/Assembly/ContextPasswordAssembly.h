//
//  ContextPasswordAssembly.h
//
//
// 11/09/2018.
//
//

#import "ModuleAssemblyBase.h"
@import RamblerTyphoonUtils.AssemblyCollector;

@class PonsomizerAssembly;

@interface ContextPasswordAssembly : ModuleAssemblyBase <RamblerInitialAssembly>
@property (nonatomic, strong) PonsomizerAssembly *ponsomizerAssembly;
@end
