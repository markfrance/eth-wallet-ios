//
//  SettingsPresenter.m
//
//
// 28/04/2018.
//
//

#import "SettingsPresenter.h"

#import "SettingsViewInput.h"
#import "SettingsInteractorInput.h"
#import "SettingsRouterInput.h"

@implementation SettingsPresenter

#pragma mark - SettingsModuleInput

- (void) configureModule {
}

#pragma mark - SettingsViewOutput

- (void) didTriggerViewReadyEvent {
	[self.view setupInitialState];
}

#pragma mark - SettingsInteractorOutput

@end
