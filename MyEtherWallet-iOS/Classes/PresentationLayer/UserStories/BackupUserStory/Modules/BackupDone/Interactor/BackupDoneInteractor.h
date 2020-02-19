//
//  BackupDoneInteractor.h
//

#import "BackupDoneInteractorInput.h"

@protocol BackupDoneInteractorOutput;

@interface BackupDoneInteractor : NSObject <BackupDoneInteractorInput>

@property (nonatomic, weak) id<BackupDoneInteractorOutput> output;

@end
