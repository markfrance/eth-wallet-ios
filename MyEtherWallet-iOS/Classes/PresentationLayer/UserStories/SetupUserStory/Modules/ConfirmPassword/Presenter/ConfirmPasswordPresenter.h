//
//  ConfirmPasswordPresenter.h
//
//
// 01/05/2018.
//
//

#import "ConfirmPasswordViewOutput.h"
#import "ConfirmPasswordInteractorOutput.h"
#import "ConfirmPasswordModuleInput.h"

@protocol ConfirmPasswordViewInput;
@protocol ConfirmPasswordInteractorInput;
@protocol ConfirmPasswordRouterInput;

@interface ConfirmPasswordPresenter : NSObject <ConfirmPasswordModuleInput, ConfirmPasswordViewOutput, ConfirmPasswordInteractorOutput>

@property (nonatomic, weak) id<ConfirmPasswordViewInput> view;
@property (nonatomic, strong) id<ConfirmPasswordInteractorInput> interactor;
@property (nonatomic, strong) id<ConfirmPasswordRouterInput> router;

@end
