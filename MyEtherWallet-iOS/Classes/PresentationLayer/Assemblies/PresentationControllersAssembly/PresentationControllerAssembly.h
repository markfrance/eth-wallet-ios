//
//  PresentationControllerAssembly.h
//

@import Typhoon;
@import RamblerTyphoonUtils.AssemblyCollector;

#import "PresentationControllerFactory.h"

@protocol ServiceComponents;
@class PonsomizerAssembly;

@interface PresentationControllerAssembly : TyphoonAssembly <PresentationControllerFactory, RamblerInitialAssembly>
@property (nonatomic, strong, readonly) TyphoonAssembly <ServiceComponents> *serviceComponents;
@property (nonatomic, strong, readonly) PonsomizerAssembly *ponsomizerAssembly;
@end
