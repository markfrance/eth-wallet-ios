//
//  ResponseMappersAssembly.h
//
//
// 03/05/2018.
//
//

@import Typhoon;
@import RamblerTyphoonUtils.AssemblyCollector;

#import "ResponseMappersFactory.h"

@interface ResponseMappersAssembly : TyphoonAssembly <ResponseMappersFactory, RamblerInitialAssembly>

@end
