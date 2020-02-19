//
//  ResponseDeserializersAssembly.h
//
//
// 21/05/2018.
//
//

@import Typhoon;
@import RamblerTyphoonUtils.AssemblyCollector;

#import "ResponseDeserializersFactory.h"

@interface ResponseDeserializersAssembly : TyphoonAssembly <ResponseDeserializersFactory, RamblerInitialAssembly>

@end
