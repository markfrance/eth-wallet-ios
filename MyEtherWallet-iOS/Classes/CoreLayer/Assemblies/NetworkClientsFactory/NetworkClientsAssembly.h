//
//  NetworkClientsAssembly.h
//
//
// 21/05/2018.
//
//

@import Typhoon;
@import RamblerTyphoonUtils.AssemblyCollector;

#import "NetworkClientsFactory.h"

@interface NetworkClientsAssembly : TyphoonAssembly <NetworkClientsFactory, RamblerInitialAssembly>
@end
