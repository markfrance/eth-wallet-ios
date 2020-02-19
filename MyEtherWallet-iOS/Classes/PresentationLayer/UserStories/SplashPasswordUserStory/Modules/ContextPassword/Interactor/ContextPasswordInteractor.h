//
//  ContextPasswordInteractor.h
//

#import "ContextPasswordInteractorInput.h"

@protocol ContextPasswordInteractorOutput;
@protocol AccountsService;
@protocol MEWwallet;
@protocol Ponsomizer;
@protocol SecurityService;

@interface ContextPasswordInteractor : NSObject <ContextPasswordInteractorInput>
@property (nonatomic, weak) id<ContextPasswordInteractorOutput> output;
@property (nonatomic, strong) id <AccountsService> accountsService;
@property (nonatomic, strong) id <MEWwallet> walletService;
@property (nonatomic, strong) id <Ponsomizer> ponsomizer;
@property (nonatomic, strong) id <SecurityService> securityService;
@end
