//
//  BackupStartPresenter.h
//

#import "BackupStartViewOutput.h"
#import "BackupStartInteractorOutput.h"
#import "BackupStartModuleInput.h"

@protocol BackupStartViewInput;
@protocol BackupStartInteractorInput;
@protocol BackupStartRouterInput;

@interface BackupStartPresenter : NSObject <BackupStartModuleInput, BackupStartViewOutput, BackupStartInteractorOutput>

@property (nonatomic, weak) id<BackupStartViewInput> view;
@property (nonatomic, strong) id<BackupStartInteractorInput> interactor;
@property (nonatomic, strong) id<BackupStartRouterInput> router;

@end
