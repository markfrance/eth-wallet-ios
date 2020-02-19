//
//  RestoreWalletPresenter.h
//
//
// 28/04/2018.
//
//

#import "RestoreWalletViewOutput.h"
#import "RestoreWalletInteractorOutput.h"
#import "RestoreWalletModuleInput.h"

@protocol RestoreWalletViewInput;
@protocol RestoreWalletInteractorInput;
@protocol RestoreWalletRouterInput;

@interface RestoreWalletPresenter : NSObject <RestoreWalletModuleInput, RestoreWalletViewOutput, RestoreWalletInteractorOutput>

@property (nonatomic, weak) id<RestoreWalletViewInput> view;
@property (nonatomic, strong) id<RestoreWalletInteractorInput> interactor;
@property (nonatomic, strong) id<RestoreWalletRouterInput> router;

@end
