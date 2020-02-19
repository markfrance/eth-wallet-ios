//
//  ResponseValidatorsAssembly.h
//
//
// 21/05/2018.
//
//

@import Typhoon;
@import RamblerTyphoonUtils.AssemblyCollector;

#import "ResponseValidatorsFactory.h"

@interface ResponseValidatorsAssembly : TyphoonAssembly <ResponseValidatorsFactory, RamblerInitialAssembly>

@end
