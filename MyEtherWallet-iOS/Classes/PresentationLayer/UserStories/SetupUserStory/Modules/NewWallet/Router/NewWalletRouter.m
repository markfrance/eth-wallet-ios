//
//  NewWalletRouter.m
//
//
// 28/04/2018.
//
//

@import ViperMcFlurryX;

#import "NewWalletRouter.h"

#import "StartModuleInput.h"
#import "HomeModuleInput.h"

static NSString *const kNewWalletToStartUnwindSegueIdentifier = @"NewWalletToStartUnwindSegueIdentifier";
static NSString *const kNewWalletToHomeUnwindSegueIdentifier  = @"NewWalletToHomeUnwindSegueIdentifier";

@implementation NewWalletRouter

#pragma mark - NewWalletRouterInput

- (void) unwindToWallet {
  [[self.transitionHandler openModuleUsingSegue:kNewWalletToHomeUnwindSegueIdentifier] thenChainUsingBlock:^id<RamblerViperModuleOutput>(id<HomeModuleInput> moduleInput) {
    [moduleInput configureModuleForNewWallet:YES];
    return nil;
  }];
}

- (void) unwindToStart {
  [[self.transitionHandler openModuleUsingSegue:kNewWalletToStartUnwindSegueIdentifier] thenChainUsingBlock:^id<RamblerViperModuleOutput>(id<StartModuleInput> moduleInput) {
    [moduleInput configurateForCreatedWallet];
    return nil;
  }];
}

@end
