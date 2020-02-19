//
//  FetchedResultsControllerAssembly.h
//
//
// 22/05/2018.
//
//

@import Typhoon;
@import RamblerTyphoonUtils.AssemblyCollector;

@protocol CacheTracker;
@protocol CacheTrackerDelegate;
@class PonsomizerAssembly;

@interface FetchedResultsControllerAssembly : TyphoonAssembly <RamblerInitialAssembly>
@property (nonatomic, strong) PonsomizerAssembly *ponsomizerAssembly;
- (id <CacheTracker>) cacheTrackerWithDelegate:(id <CacheTrackerDelegate>)delegate;
@end

