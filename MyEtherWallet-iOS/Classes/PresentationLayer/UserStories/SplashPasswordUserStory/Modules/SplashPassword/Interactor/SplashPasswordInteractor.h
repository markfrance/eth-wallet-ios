//
//  SplashPasswordInteractor.h
//

#import "SplashPasswordInteractorInput.h"

@protocol SplashPasswordInteractorOutput;
@protocol AccountsService;
@protocol MEWwallet;
@protocol Ponsomizer;
@protocol SecurityService;
@protocol KeychainService;
@protocol TokensService;

@interface SplashPasswordInteractor : NSObject <SplashPasswordInteractorInput>
@property (nonatomic, weak) id <SplashPasswordInteractorOutput> output;
@property (nonatomic, strong) id <AccountsService> accountsService;
@property (nonatomic, strong) id <KeychainService> keychainService;
@property (nonatomic, strong) id <TokensService> tokensService;
@property (nonatomic, strong) id <MEWwallet> walletService;
@property (nonatomic, strong) id <Ponsomizer> ponsomizer;
@property (nonatomic, strong) id <SecurityService> securityService;
@end
