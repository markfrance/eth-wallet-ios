//
//  ResponseConverterAssembly.h
//
//
// 21/05/2018.
//
//

@import Typhoon;
@import RamblerTyphoonUtils.AssemblyCollector;

#import "ResponseConverterFactory.h"

@interface ResponseConverterAssembly : TyphoonAssembly <ResponseConverterFactory, RamblerInitialAssembly>

@end
