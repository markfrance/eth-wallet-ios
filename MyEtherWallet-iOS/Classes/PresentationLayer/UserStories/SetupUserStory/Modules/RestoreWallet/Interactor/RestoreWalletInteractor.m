//
//  RestoreWalletInteractor.m
//
//
// 28/04/2018.
//
//

#import "RestoreWalletInteractor.h"

#import "RestoreWalletInteractorOutput.h"

#import "MEWwallet.h"

#import "ObjectValidator.h"

@implementation RestoreWalletInteractor {
  NSString *_mnemonics;
}

#pragma mark - RestoreWalletInteractorInput

- (void)configurate {
}

- (void) checkMnemonics:(NSString *)mnemonics {
  if ([self.mnemonicsValidator isObjectValidated:mnemonics]) {
    _mnemonics = mnemonics;
    [self.output allowRestore];
  } else {
    _mnemonics = nil;
    [self.output disallowRestore];
  }
}

- (void) tryRestore {
  if (![self.mnemonicsValidator isObjectValidated:_mnemonics]) {
    [self.output restoreNotPossible];
    return;
  }
  NSArray <NSString *> *words = [self.mnemonicsValidator extractValidObject:_mnemonics];
  if (!words) {
    [self.output restoreNotPossible];
    return;
  }
  [self.output openPasswordWithWords:words];
}

@end
