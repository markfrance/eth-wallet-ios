//
//  MessageSignerPresenter.h
//
//
// 03/05/2018.
//
//

#import "MessageSignerViewOutput.h"
#import "MessageSignerInteractorOutput.h"
#import "MessageSignerModuleInput.h"
#import "ConfirmationStoryModuleOutput.h"

@protocol MessageSignerViewInput;
@protocol MessageSignerInteractorInput;
@protocol MessageSignerRouterInput;

@interface MessageSignerPresenter : NSObject <MessageSignerModuleInput, MessageSignerViewOutput, MessageSignerInteractorOutput>
@property (nonatomic, weak) id<MessageSignerViewInput> view;
@property (nonatomic, strong) id<MessageSignerInteractorInput> interactor;
@property (nonatomic, strong) id<MessageSignerRouterInput> router;
@property (nonatomic, weak) id <ConfirmationStoryModuleOutput> moduleOutput;
@end
