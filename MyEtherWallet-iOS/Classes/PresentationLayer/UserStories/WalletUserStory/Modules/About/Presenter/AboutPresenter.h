//
//  AboutPresenter.h
//
//
// 25/07/2018.
//
//

#import "AboutViewOutput.h"
#import "AboutInteractorOutput.h"
#import "AboutModuleInput.h"

@protocol AboutViewInput;
@protocol AboutInteractorInput;
@protocol AboutRouterInput;

@interface AboutPresenter : NSObject <AboutModuleInput, AboutViewOutput, AboutInteractorOutput>

@property (nonatomic, weak) id<AboutViewInput> view;
@property (nonatomic, strong) id<AboutInteractorInput> interactor;
@property (nonatomic, strong) id<AboutRouterInput> router;

@end
