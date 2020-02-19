//
//  HomePresenter.h
//
//
// 28/04/2018.
//
//

#import "HomeViewOutput.h"
#import "HomeInteractorOutput.h"
#import "HomeModuleInput.h"

@protocol HomeViewInput;
@protocol HomeInteractorInput;
@protocol HomeRouterInput;

@interface HomePresenter : NSObject <HomeModuleInput, HomeViewOutput, HomeInteractorOutput>

@property (nonatomic, weak) id<HomeViewInput> view;
@property (nonatomic, strong) id<HomeInteractorInput> interactor;
@property (nonatomic, strong) id<HomeRouterInput> router;

@end
