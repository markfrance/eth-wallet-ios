//
//  ContextPasswordPresenter.h
//
//
// 11/09/2018.
//
//

#import "ContextPasswordViewOutput.h"
#import "ContextPasswordInteractorOutput.h"
#import "ContextPasswordModuleInput.h"

@protocol ContextPasswordViewInput;
@protocol ContextPasswordInteractorInput;
@protocol ContextPasswordRouterInput;
@protocol ContextPasswordModuleOutput;

@interface ContextPasswordPresenter : NSObject <ContextPasswordModuleInput, ContextPasswordViewOutput, ContextPasswordInteractorOutput>
@property (nonatomic, weak) id<ContextPasswordViewInput> view;
@property (nonatomic, strong) id<ContextPasswordInteractorInput> interactor;
@property (nonatomic, strong) id<ContextPasswordRouterInput> router;
@property (nonatomic, weak) id<ContextPasswordModuleOutput> moduleOutput;
@end
