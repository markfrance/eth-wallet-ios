//
//  ManagedObjectMapper.m
//
//
// 22/05/2018.
//
//

@import EasyMapping;
@import MagicalRecord;

#import "ManagedObjectMapper.h"

#import "ManagedObjectMappingProvider.h"
#import "ResponseObjectFormatter.h"
#import "EntityNameFormatter.h"
#import "NetworkingConstantsHeader.h"

@interface ManagedObjectMapper ()
@property (nonatomic, strong) ManagedObjectMappingProvider *provider;
@property (nonatomic, strong) id<ResponseObjectFormatter> responseFormatter;
@property (nonatomic, strong) id<EntityNameFormatter> entityNameFormatter;
@end

@implementation ManagedObjectMapper

#pragma mark - Initialization

- (instancetype)initWithMappingProvider:(ManagedObjectMappingProvider *)mappingProvider
                responseObjectFormatter:(id<ResponseObjectFormatter>)responseFormatter
                    entityNameFormatter:(id<EntityNameFormatter>)entityNameFormatter {
  self = [super init];
  if (self) {
    _provider = mappingProvider;
    _responseFormatter = responseFormatter;
    _entityNameFormatter = entityNameFormatter;
  }
  return self;
}

#pragma mark - RCFResponseMapper

- (id)mapServerResponse:(id)response
     withMappingContext:(NSDictionary *)context
                  error:(__unused NSError *__autoreleasing *)error {
  if (self.responseFormatter) {
    response = [self.responseFormatter formatServerResponse:response];
  }
  NSManagedObjectContext *rootSavingContext = [NSManagedObjectContext MR_rootSavingContext];
  EKManagedObjectMapping *mapping = [self retreiveMappingForMappingContext:context];
  
  __block NSArray *result;
  [rootSavingContext performBlockAndWait:^{
    result = [EKManagedObjectMapper arrayOfObjectsFromExternalRepresentation:response
                                                                 withMapping:mapping
                                                      inManagedObjectContext:rootSavingContext];
    [rootSavingContext MR_saveToPersistentStoreAndWait];
  }];
  
  return result;
}

#pragma mark - Helper Methods

- (EKManagedObjectMapping *)retreiveMappingForMappingContext:(NSDictionary *)mappingContext {
  Class managedObjectClass = NSClassFromString(mappingContext[kMappingContextModelClassKey]);
  EKManagedObjectMapping *mapping = [self.provider mappingForManagedObjectModelClass:managedObjectClass];
  return mapping;
}

- (NSFetchRequest *)createFetchRequestForMappingContext:(NSDictionary *)mappingContext
                                         managedContext:(NSManagedObjectContext *)managedContext {
  NSFetchRequest *request = [[NSFetchRequest alloc] init];
  NSString *managedObjectClassName = mappingContext[kMappingContextModelClassKey];
  NSString *entityName = [self.entityNameFormatter transformToEntityNameClass:NSClassFromString(managedObjectClassName)];
  [request setEntity:[NSEntityDescription entityForName:entityName
                                 inManagedObjectContext:managedContext]];
  return request;
}

#pragma mark - Debug Description

- (NSString *)debugDescription {
  return NSStringFromClass([self class]);
}

@end
