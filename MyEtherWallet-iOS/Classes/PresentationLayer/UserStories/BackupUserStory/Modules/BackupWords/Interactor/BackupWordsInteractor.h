//
//  BackupWordsInteractor.h
//

#import "BackupWordsInteractorInput.h"

@protocol BackupWordsInteractorOutput;
@protocol SecurityService;

@interface BackupWordsInteractor : NSObject <BackupWordsInteractorInput>
@property (nonatomic, weak) id<BackupWordsInteractorOutput> output;
@property (nonatomic, strong) id <SecurityService> securityService;
@end
