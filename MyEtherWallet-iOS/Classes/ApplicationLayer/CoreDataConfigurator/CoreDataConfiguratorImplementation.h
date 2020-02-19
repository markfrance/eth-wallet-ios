//
//  CoreDataConfiguratorImplementation.h
//

#import "CoreDataConfigurator.h"

@protocol KeychainService;
@protocol Ponsomizer;

@interface CoreDataConfiguratorImplementation : NSObject <CoreDataConfigurator>
@property (nonatomic, strong) NSFileManager *fileManager;
@property (nonatomic, strong) id <KeychainService> keychainService;
@property (nonatomic, strong) id <Ponsomizer> ponsomizer;
@property (nonatomic, strong) NSUserDefaults *userDefaults;
@end
