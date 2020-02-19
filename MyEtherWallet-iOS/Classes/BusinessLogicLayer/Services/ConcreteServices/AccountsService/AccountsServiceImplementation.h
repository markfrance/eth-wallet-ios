//
//  AccountsServiceImplementation.h
//
//
// 27/06/2018.
//
//

#import "AccountsService.h"

@class AccountsOperationFactory;
@protocol OperationScheduler;
@protocol MEWwallet;
@protocol KeychainService;

@interface AccountsServiceImplementation : NSObject <AccountsService>
@property (nonatomic, strong) id <OperationScheduler> operationScheduler;
@property (nonatomic, strong) id <MEWwallet> MEWwallet;
@property (nonatomic, strong) id <KeychainService> keychainService;
@end
