//
//  BackupInfoPresenter.h
//

#import "BackupInfoViewOutput.h"
#import "BackupInfoInteractorOutput.h"
#import "BackupInfoModuleInput.h"

@protocol BackupInfoViewInput;
@protocol BackupInfoInteractorInput;
@protocol BackupInfoRouterInput;

@interface BackupInfoPresenter : NSObject <BackupInfoModuleInput, BackupInfoViewOutput, BackupInfoInteractorOutput>

@property (nonatomic, weak) id<BackupInfoViewInput> view;
@property (nonatomic, strong) id<BackupInfoInteractorInput> interactor;
@property (nonatomic, strong) id<BackupInfoRouterInput> router;

@end
