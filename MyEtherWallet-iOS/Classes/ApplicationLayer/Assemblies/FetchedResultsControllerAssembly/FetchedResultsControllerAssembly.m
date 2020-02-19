//
//  FetchedResultsControllerAssembly.m
//
//
// 22/05/2018.
//
//

#import "FetchedResultsControllerAssembly.h"
#import "PonsomizerAssembly.h"

#import "CacheTrackerImplementation.h"

@implementation FetchedResultsControllerAssembly

- (id <CacheTracker>) cacheTrackerWithDelegate:(id<CacheTrackerDelegate>)delegate {
  return [TyphoonDefinition withClass:[CacheTrackerImplementation class]
                        configuration:^(TyphoonDefinition *definition) {
                          [definition injectProperty:@selector(ponsomizer)
                                                with:[self.ponsomizerAssembly ponsomizer]];
                          [definition injectProperty:@selector(delegate)
                                                with:delegate];
                        }];
}

@end
