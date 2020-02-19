//
//  ModuleAssemblyBase.h
//

@import Typhoon;

@protocol ServiceComponents;
@protocol ValidatorComponents;
@protocol TransitioningDelegateFactory;
@class PresentationLayerHelpersAssembly;

@interface ModuleAssemblyBase : TyphoonAssembly
@property (nonatomic, strong, readonly) TyphoonAssembly <ServiceComponents> *serviceComponents;
@property (nonatomic, strong, readonly) TyphoonAssembly <ValidatorComponents> *validatorComponents;
@property (nonatomic, strong, readonly) TyphoonAssembly <TransitioningDelegateFactory> *transitioningDelegateFactory;
@property (nonatomic, strong, readonly) PresentationLayerHelpersAssembly *presentationLayerHelpersAssembly;
@end
