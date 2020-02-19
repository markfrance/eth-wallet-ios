//
//  PonsomizerAssembly.m
//
//
// 22/05/2018.
//
//

#import "PonsomizerAssembly.h"
#import "PonsomizerImplementation.h"

@implementation PonsomizerAssembly

- (id <Ponsomizer>)ponsomizer {
  return [TyphoonDefinition withClass:[PonsomizerImplementation class]];
}

@end
