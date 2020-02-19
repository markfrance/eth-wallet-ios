//
//  HomeAssembly.h
//
//
// 28/04/2018.
//
//

#import "ModuleAssemblyBase.h"

@import RamblerTyphoonUtils.AssemblyCollector;

@class FetchedResultsControllerAssembly;
@class ModuleFactoriesAssembly;
@class PonsomizerAssembly;
@protocol PropertyAnimatorsFactory;

@interface HomeAssembly : ModuleAssemblyBase <RamblerInitialAssembly>
@property (nonatomic, strong, readonly) FetchedResultsControllerAssembly *cacheTrackerAssembly;
@property (nonatomic, strong, readonly) ModuleFactoriesAssembly *moduleFactoriesAssembly;
@property (nonatomic, strong, readonly) PonsomizerAssembly *ponsomizerAssembly;
@property (nonatomic, strong, readonly) TyphoonAssembly <PropertyAnimatorsFactory> *propertyAnimatorsFactory;
@end
