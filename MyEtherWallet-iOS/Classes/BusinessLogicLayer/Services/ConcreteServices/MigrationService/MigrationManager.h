//
//  MigrationManager.h
//
//
// 23/10/2018.
//
//

@import Foundation;

@class NSManagedObjectModel;

@protocol MigrationManagerDelegate;

NS_ASSUME_NONNULL_BEGIN

@interface MigrationManager : NSObject
@property (nonatomic, weak) id <MigrationManagerDelegate> delegate;
@property (nonatomic, strong) NSFileManager *fileManager;
- (BOOL) progressivelyMigrateURL:(NSURL *)sourceStoreURL
                          ofType:(NSString *)type
                         toModel:(NSManagedObjectModel *)finalModel
                           error:(NSError **)error;
@end

@protocol MigrationManagerDelegate <NSObject>
@optional
- (nullable NSArray *) migrationManager:(MigrationManager *)migrationManager mappingModelsForSourceModel:(NSManagedObjectModel *)sourceModel;
- (void) migrationManager:(MigrationManager *)migrationManager didMigrationFromSourceVersion:(NSInteger)sourceVersion destinationVersion:(NSInteger)destinationVersion;
@end

NS_ASSUME_NONNULL_END
