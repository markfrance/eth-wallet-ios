//
//  ModuleFactoriesAssembly.h
//

@import Typhoon;
@import RamblerTyphoonUtils.AssemblyCollector;

@class RamblerViperModuleFactory;
@class StoryboardsAssembly;

@interface ModuleFactoriesAssembly : TyphoonAssembly <RamblerInitialAssembly>
@property (nonatomic, strong, readonly) StoryboardsAssembly *storyboardsAssembly;
- (RamblerViperModuleFactory *) homeFactory;
- (RamblerViperModuleFactory *) transactionFactory;
- (RamblerViperModuleFactory *) messageSignerFactory;
- (RamblerViperModuleFactory *) splashPasswordFactory;
@end
