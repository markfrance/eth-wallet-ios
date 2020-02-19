//
//  PasswordPresenter.h
//

#import "PasswordViewOutput.h"
#import "PasswordInteractorOutput.h"
#import "PasswordModuleInput.h"

@protocol PasswordViewInput;
@protocol PasswordInteractorInput;
@protocol PasswordRouterInput;

@interface PasswordPresenter : NSObject <PasswordModuleInput, PasswordViewOutput, PasswordInteractorOutput>

@property (nonatomic, weak) id<PasswordViewInput> view;
@property (nonatomic, strong) id<PasswordInteractorInput> interactor;
@property (nonatomic, strong) id<PasswordRouterInput> router;

@end
