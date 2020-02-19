//
//  AboutPresenter.m
//
//
// 25/07/2018.
//
//

#import "AboutPresenter.h"

#import "AboutViewInput.h"
#import "AboutInteractorInput.h"
#import "AboutRouterInput.h"

@implementation AboutPresenter

#pragma mark - AboutModuleInput

- (void) configureModule {
}

#pragma mark - AboutViewOutput

- (void) didTriggerViewReadyEvent {
	[self.view setupInitialState];
}

- (void) closeAction {
  [self.router close];
}

#pragma mark - AboutInteractorOutput

@end
