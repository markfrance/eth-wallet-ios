//
//  SplashPasswordAssembly.h
//

#import "ModuleAssemblyBase.h"
@import RamblerTyphoonUtils.AssemblyCollector;

@class PonsomizerAssembly;

@interface SplashPasswordAssembly : ModuleAssemblyBase <RamblerInitialAssembly>
@property (nonatomic, strong) PonsomizerAssembly *ponsomizerAssembly;
@end
