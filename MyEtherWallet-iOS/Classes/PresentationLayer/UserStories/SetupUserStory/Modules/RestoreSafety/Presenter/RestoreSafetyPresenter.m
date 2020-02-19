//
//  RestoreSafetyPresenter.m
//
//
// 18/02/2019.
//  Copyright © 2019 MyEtherWallet, Inc.. All rights reserved.
//

#import "RestoreSafetyPresenter.h"

#import "RestoreSafetyViewInput.h"
#import "RestoreSafetyInteractorInput.h"
#import "RestoreSafetyRouterInput.h"

@implementation RestoreSafetyPresenter

#pragma mark - RestoreSafetyModuleInput

- (void) configureModule {
}

#pragma mark - RestoreSafetyViewOutput

- (void) didTriggerViewReadyEvent {
	[self.view setupInitialState];
}

#pragma mark - RestoreSafetyInteractorOutput

@end
