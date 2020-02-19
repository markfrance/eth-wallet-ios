//
//  ForgotPasswordInteractor.m
//

#import "ForgotPasswordInteractor.h"

#import "ForgotPasswordInteractorOutput.h"

#import "AccountsService.h"
#import "KeychainService.h"
#import "TokensService.h"

@interface ForgotPasswordInteractor ()
@property (nonatomic, strong) AccountPlainObject *account;
@end

@implementation ForgotPasswordInteractor

#pragma mark - ForgotPasswordInteractorInput

- (void)configurateWithAccount:(AccountPlainObject *)account {
  _account = account;
}

- (void) resetWallet {
  [self.accountsService resetAccounts];
  [self.tokensService resetTokens];
  [self.keychainService resetKeychain];
}

@end
