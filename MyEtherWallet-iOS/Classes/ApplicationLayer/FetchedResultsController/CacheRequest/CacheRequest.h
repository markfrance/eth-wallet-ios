//
//  CacheRequest.h
//
//
// 22/05/2018.
//
//

@import Foundation;

@interface CacheRequest : NSObject
@property (nonatomic, strong, readonly) NSPredicate *predicate;
@property (nonatomic, strong, readonly) NSArray *sortDescriptors;
@property (nonatomic, assign, readonly) Class objectClass;
@property (nonatomic, strong, readonly) NSString *filterValue;
@property (nonatomic, strong, readonly) NSArray <NSString *> *ignoringProperties;
@property (nonatomic, readonly)         BOOL sections;

+ (instancetype)requestWithPredicate:(NSPredicate *)predicate
                     sortDescriptors:(NSArray *)sortDescriptors
                         objectClass:(Class)objectClass
                         filterValue:(NSString *)filterValue
                  ignoringProperties:(NSArray <NSString *> *)ignoringProperties;

+ (instancetype)requestWithPredicate:(NSPredicate *)predicate
                     sortDescriptors:(NSArray *)sortDescriptors
                         objectClass:(Class)objectClass
                         filterValue:(NSString *)filterValue
                  ignoringProperties:(NSArray <NSString *> *)ignoringProperties
                            sections:(BOOL)section;
@end
