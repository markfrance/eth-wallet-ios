//
//  TransactionAssembly.h
//
//
// 28/04/2018.
//
//

#import "ModuleAssemblyBase.h"

@import RamblerTyphoonUtils.AssemblyCollector;

@class PonsomizerAssembly;

@interface TransactionAssembly : ModuleAssemblyBase <RamblerInitialAssembly>
@property (nonatomic, strong, readonly) PonsomizerAssembly *ponsomizerAssembly;
@end
