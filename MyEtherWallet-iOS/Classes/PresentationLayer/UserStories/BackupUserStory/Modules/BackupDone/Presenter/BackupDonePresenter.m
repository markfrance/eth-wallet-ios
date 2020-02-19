//
//  BackupDonePresenter.m
//

#import "BackupDonePresenter.h"

#import "BackupDoneViewInput.h"
#import "BackupDoneInteractorInput.h"
#import "BackupDoneRouterInput.h"

@implementation BackupDonePresenter

#pragma mark - BackupDoneModuleInput

- (void) configureModule {
}

#pragma mark - BackupDoneViewOutput

- (void) didTriggerViewReadyEvent {
	[self.view setupInitialState];
}

- (void) doneAction {
  [self.router unwindToHome];
}

#pragma mark - BackupDoneInteractorOutput

@end
