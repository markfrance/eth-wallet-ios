//
//  ConfirmationNavigationPresenter.h
//
//
// 17/07/2018.
//
//

#import "ConfirmationNavigationViewOutput.h"
#import "ConfirmationNavigationModuleInput.h"

@protocol ConfirmationNavigationViewInput;
@protocol ConfirmationNavigationRouterInput;

@interface ConfirmationNavigationPresenter : NSObject <ConfirmationNavigationModuleInput, ConfirmationNavigationViewOutput>

@property (nonatomic, weak) id<ConfirmationNavigationViewInput> view;
@property (nonatomic, strong) id<ConfirmationNavigationRouterInput> router;

@end
