//
//  BackupInfoInteractor.h
//

#import "BackupInfoInteractorInput.h"

@protocol BackupInfoInteractorOutput;

@interface BackupInfoInteractor : NSObject <BackupInfoInteractorInput>

@property (nonatomic, weak) id<BackupInfoInteractorOutput> output;

@end
