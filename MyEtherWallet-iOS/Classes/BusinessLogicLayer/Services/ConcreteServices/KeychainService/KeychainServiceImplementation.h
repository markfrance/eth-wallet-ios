//
//  KeychainServiceImplementation.h
//
//
// 29/06/2018.
//
//

#import "KeychainService.h"

@class UICKeyChainStore;

@interface KeychainServiceImplementation : NSObject <KeychainService>
@property (nonatomic, strong) UICKeyChainStore *keychainStore;
@property (nonatomic, strong) NSDateFormatter *dateFormatter;
@end
