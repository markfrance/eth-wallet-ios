//
//  TransitioningDelegateAssembly.h
//

@import Typhoon;
@import RamblerTyphoonUtils.AssemblyCollector;

#import "TransitioningDelegateFactory.h"

@protocol PresentationControllerFactory;

@interface TransitioningDelegateAssembly : TyphoonAssembly <TransitioningDelegateFactory, RamblerInitialAssembly>
@property (nonatomic, strong, readonly) TyphoonAssembly <PresentationControllerFactory> *presentationControllerFactory;
@end
