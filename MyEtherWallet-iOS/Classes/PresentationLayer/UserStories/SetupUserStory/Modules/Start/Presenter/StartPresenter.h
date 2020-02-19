//
//  StartPresenter.h
//
//
// 14/04/2018.
//
//

#import "StartViewOutput.h"
#import "StartInteractorOutput.h"
#import "StartModuleInput.h"

@protocol StartViewInput;
@protocol StartInteractorInput;
@protocol StartRouterInput;

@interface StartPresenter : NSObject <StartModuleInput, StartViewOutput, StartInteractorOutput>

@property (nonatomic, weak) id<StartViewInput> view;
@property (nonatomic, strong) id<StartInteractorInput> interactor;
@property (nonatomic, strong) id<StartRouterInput> router;

@end
