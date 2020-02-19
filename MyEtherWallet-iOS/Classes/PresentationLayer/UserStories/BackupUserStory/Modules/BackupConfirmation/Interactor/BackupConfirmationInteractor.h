//
//  BackupConfirmationInteractor.h
//

#import "BackupConfirmationInteractorInput.h"

@protocol BackupConfirmationInteractorOutput;
@protocol AccountsService;
@protocol MEWwallet;
@protocol SecurityService;

@interface BackupConfirmationInteractor : NSObject <BackupConfirmationInteractorInput>
@property (nonatomic, weak) id<BackupConfirmationInteractorOutput> output;
@property (nonatomic, strong) id <AccountsService> accountsService;
@property (nonatomic, strong) id <MEWwallet> walletService;
@property (nonatomic, strong) id <SecurityService> securityService;
@end
