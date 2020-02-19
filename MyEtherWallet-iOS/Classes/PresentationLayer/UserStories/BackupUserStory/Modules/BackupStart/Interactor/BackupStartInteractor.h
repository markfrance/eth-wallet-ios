//
//  BackupStartInteractor.h
//

#import "BackupStartInteractorInput.h"

@protocol BackupStartInteractorOutput;
@protocol AccountsService;

@interface BackupStartInteractor : NSObject <BackupStartInteractorInput>
@property (nonatomic, weak) id<BackupStartInteractorOutput> output;
@property (nonatomic, strong) id <MEWwallet> walletService;
@end
