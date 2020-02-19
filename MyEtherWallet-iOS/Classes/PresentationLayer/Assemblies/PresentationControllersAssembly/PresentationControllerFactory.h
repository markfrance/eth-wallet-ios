//
//  PresentationControllerFactory.h
//
//
// 26/05/2018.
//
//

@import Foundation;
#import "PresentationControllerType.h"

@protocol PresentationControllerFactory <NSObject>
- (UIPresentationController *)controllerForPresentationType:(NSNumber *)type
                                    presentedViewController:(UIViewController *)presented
                                   presentingViewController:(UIViewController *)presenting
                                       sourceViewController:(UIViewController *)source
                                               cornerRadius:(NSNumber *)cornerRadius
                                                     dimmed:(NSNumber *)dimmed;
@end
