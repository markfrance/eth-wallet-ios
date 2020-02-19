//
//  RequestConfiguratorsAssembly.h
//
//
// 21/05/2018.
//
//

@import Typhoon;
@import RamblerTyphoonUtils.AssemblyCollector;

#import "RequestConfiguratorsFactory.h"

@interface RequestConfiguratorsAssembly : TyphoonAssembly <RequestConfiguratorsFactory, RamblerInitialAssembly>

@end
