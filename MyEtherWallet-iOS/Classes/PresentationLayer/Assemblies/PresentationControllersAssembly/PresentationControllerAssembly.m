//
//  PresentationControllerAssembly.m
//

#import "PresentationControllerAssembly.h"

#import "BottomModalPresentationController.h"
#import "BottomBackgroundedModalPresentationController.h"

#import "ServiceComponents.h"
#import "PonsomizerAssembly.h"

@implementation PresentationControllerAssembly

- (UIPresentationController *)controllerForPresentationType:(NSNumber *)type
                                    presentedViewController:(UIViewController *)presented
                                   presentingViewController:(UIViewController *)presenting
                                       sourceViewController:(UIViewController *)source
                                               cornerRadius:(NSNumber *)cornerRadius
                                                     dimmed:(NSNumber *)dimmed {
  return [TyphoonDefinition withOption:type matcher:^(TyphoonOptionMatcher *matcher) {
    [matcher caseEqual:@(PresentationControllerBottomModalType)
                   use:[self bottomModalControllerForPresented:presented
                                                    presenting:presenting
                                                        source:source
                                                  cornerRadius:cornerRadius
                                                        dimmed:dimmed]];
    [matcher caseEqual:@(PresentationControllerBottomBackgroundedModalType)
                   use:[self bottomBackgroundedModalControllerForPresented:presented
                                                                presenting:presenting
                                                                    source:source
                                                              cornerRadius:cornerRadius
                                                                    dimmed:dimmed]];
  }];
}

- (UIPresentationController *) bottomModalControllerForPresented:(UIViewController *)presented presenting:(UIViewController *)presenting source:(__unused UIViewController *)source cornerRadius:(NSNumber *)cornerRadius dimmed:(NSNumber *)dimmed {
  return [TyphoonDefinition withClass:[BottomModalPresentationController class]
                        configuration:^(TyphoonDefinition *definition) {
                          [definition useInitializer:@selector(initWithPresentedViewController:presentingViewController:) parameters:^(TyphoonMethod *initializer) {
                            [initializer injectParameterWith:presented];
                            [initializer injectParameterWith:presenting];
                          }];
                          [definition injectProperty:@selector(cornerRadius) with:cornerRadius];
                          [definition injectProperty:@selector(dimmed) with:dimmed];
                        }];
}

- (UIPresentationController *) bottomBackgroundedModalControllerForPresented:(UIViewController *)presented presenting:(UIViewController *)presenting source:(__unused UIViewController *)source cornerRadius:(NSNumber *)cornerRadius dimmed:(NSNumber *)dimmed {
  return [TyphoonDefinition withClass:[BottomBackgroundedModalPresentationController class]
                        configuration:^(TyphoonDefinition *definition) {
                          [definition useInitializer:@selector(initWithPresentedViewController:presentingViewController:) parameters:^(TyphoonMethod *initializer) {
                            [initializer injectParameterWith:presented];
                            [initializer injectParameterWith:presenting];
                          }];
                          [definition injectProperty:@selector(networkService) with:[self.serviceComponents blockchainNetworkService]];
                          [definition injectProperty:@selector(ponsomizer) with:[self.ponsomizerAssembly ponsomizer]];
                          [definition injectProperty:@selector(cornerRadius) with:cornerRadius];
                          [definition injectProperty:@selector(dimmed) with:dimmed];
                        }];
}

@end
