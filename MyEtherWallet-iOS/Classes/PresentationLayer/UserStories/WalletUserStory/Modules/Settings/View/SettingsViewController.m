//
//  SettingsViewController.m
//
//
// 28/04/2018.
//
//

#import "SettingsViewController.h"

#import "SettingsViewOutput.h"

@implementation SettingsViewController

#pragma mark - LifeCycle

- (void)viewDidLoad {
	[super viewDidLoad];

	[self.output didTriggerViewReadyEvent];
}

#pragma mark - SettingsViewInput

- (void) setupInitialState {
}

@end
