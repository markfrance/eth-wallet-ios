//
//  BackupInfoInteractor.m
//

#import "BackupInfoInteractor.h"

#import "BackupInfoInteractorOutput.h"

@interface BackupInfoInteractor ()
@property (nonatomic, strong) AccountPlainObject *account;
@end

@implementation BackupInfoInteractor

#pragma mark - BackupInfoInteractorInput

- (void) configurateWithAccount:(AccountPlainObject *)account {
  self.account = account;
}

- (AccountPlainObject *) obtainAccount {
  return self.account;
}

@end
