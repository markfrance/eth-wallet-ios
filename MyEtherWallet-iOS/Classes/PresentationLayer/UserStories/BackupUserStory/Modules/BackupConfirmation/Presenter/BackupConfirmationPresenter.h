//
//  BackupConfirmationPresenter.h
//

#import "BackupConfirmationViewOutput.h"
#import "BackupConfirmationInteractorOutput.h"
#import "BackupConfirmationModuleInput.h"

@protocol BackupConfirmationViewInput;
@protocol BackupConfirmationInteractorInput;
@protocol BackupConfirmationRouterInput;

@interface BackupConfirmationPresenter : NSObject <BackupConfirmationModuleInput, BackupConfirmationViewOutput, BackupConfirmationInteractorOutput>

@property (nonatomic, weak) id<BackupConfirmationViewInput> view;
@property (nonatomic, strong) id<BackupConfirmationInteractorInput> interactor;
@property (nonatomic, strong) id<BackupConfirmationRouterInput> router;

@end
