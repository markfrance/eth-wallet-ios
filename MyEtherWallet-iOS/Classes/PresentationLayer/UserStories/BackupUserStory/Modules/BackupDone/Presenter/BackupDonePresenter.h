//
//  BackupDonePresenter.h
//

#import "BackupDoneViewOutput.h"
#import "BackupDoneInteractorOutput.h"
#import "BackupDoneModuleInput.h"

@protocol BackupDoneViewInput;
@protocol BackupDoneInteractorInput;
@protocol BackupDoneRouterInput;

@interface BackupDonePresenter : NSObject <BackupDoneModuleInput, BackupDoneViewOutput, BackupDoneInteractorOutput>

@property (nonatomic, weak) id<BackupDoneViewInput> view;
@property (nonatomic, strong) id<BackupDoneInteractorInput> interactor;
@property (nonatomic, strong) id<BackupDoneRouterInput> router;

@end
