//
//  SecurityServiceImplementation.h
//
//
// 07/11/2018.
//
//

#import "SecurityService.h"

@protocol KeychainService;

NS_ASSUME_NONNULL_BEGIN

@interface SecurityServiceImplementation : NSObject <SecurityService>
@property (nonatomic, strong) id <KeychainService> keychainService;
@end

NS_ASSUME_NONNULL_END
