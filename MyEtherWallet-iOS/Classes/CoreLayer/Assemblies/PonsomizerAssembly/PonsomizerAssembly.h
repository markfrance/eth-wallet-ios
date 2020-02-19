//
//  PonsomizerAssembly.h
//
//
// 22/05/2018.
//
//

@import Typhoon;
@import RamblerTyphoonUtils.AssemblyCollector;

@protocol Ponsomizer;

@interface PonsomizerAssembly : TyphoonAssembly <RamblerInitialAssembly>
- (id <Ponsomizer>)ponsomizer;
@end

