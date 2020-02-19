//
//  MigrationServiceImplementation.h
//
//
// 23/10/2018.
//
//

#import "MigrationService.h"

@class MigrationManager;
@protocol KeychainService;
@protocol KeychainServiceProtected;

NS_ASSUME_NONNULL_BEGIN

@interface MigrationServiceImplementation : NSObject <MigrationService>
@property (nonatomic, strong) NSFileManager *fileManager;
@property (nonatomic, strong) MigrationManager *migrationManager;
@property (nonatomic, strong) id <KeychainService, KeychainServiceProtected> keychainService;
@end

NS_ASSUME_NONNULL_END
