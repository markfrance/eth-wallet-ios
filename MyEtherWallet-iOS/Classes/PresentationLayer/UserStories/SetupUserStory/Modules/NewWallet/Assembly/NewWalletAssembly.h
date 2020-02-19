//
//  NewWalletAssembly.h
//
//
// 28/04/2018.
//
//

@import RamblerTyphoonUtils.AssemblyCollector;

#import "ModuleAssemblyBase.h"

@class PonsomizerAssembly;

@interface NewWalletAssembly : ModuleAssemblyBase <RamblerInitialAssembly>
@property (nonatomic, strong, readonly) PonsomizerAssembly *ponsomizerAssembly;
@end
