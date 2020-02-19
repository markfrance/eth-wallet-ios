//
//  ForgotPasswordPresenter.h
//

#import "ForgotPasswordViewOutput.h"
#import "ForgotPasswordInteractorOutput.h"
#import "ForgotPasswordModuleInput.h"

@protocol ForgotPasswordViewInput;
@protocol ForgotPasswordInteractorInput;
@protocol ForgotPasswordRouterInput;

@interface ForgotPasswordPresenter : NSObject <ForgotPasswordModuleInput, ForgotPasswordViewOutput, ForgotPasswordInteractorOutput>

@property (nonatomic, weak) id<ForgotPasswordViewInput> view;
@property (nonatomic, strong) id<ForgotPasswordInteractorInput> interactor;
@property (nonatomic, strong) id<ForgotPasswordRouterInput> router;

@end
