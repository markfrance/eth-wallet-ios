//
//  TyphoonAppDelegate.m
//
//
// 14/04/2018.
//
//

@import RamblerTyphoonUtils.AssemblyCollector;

#import "TyphoonAppDelegate.h"

@implementation TyphoonAppDelegate

- (NSArray *)initialAssemblies {
  RamblerInitialAssemblyCollector *collector = [RamblerInitialAssemblyCollector new];
  return [collector collectInitialAssemblyClasses];
}

@end
