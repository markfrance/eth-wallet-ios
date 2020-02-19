//
//  NewWalletInteractor.h
//
//
// 28/04/2018.
//
//

#import "NewWalletInteractorInput.h"

@protocol NewWalletInteractorOutput;
@protocol AccountsService;
@protocol KeychainService;
@protocol TokensService;
@protocol BlockchainNetworkService;
@protocol MEWwallet;
@protocol Ponsomizer;
@protocol MEWConnectFacade;

@interface NewWalletInteractor : NSObject <NewWalletInteractorInput>

@property (nonatomic, weak) id<NewWalletInteractorOutput> output;
@property (nonatomic, strong) id <AccountsService> accountsService;
@property (nonatomic, strong) id <KeychainService> keychainService;
@property (nonatomic, strong) id <TokensService> tokensService;
@property (nonatomic, strong) id <BlockchainNetworkService> blockchainNetworkService;
@property (nonatomic, strong) id <MEWwallet> mewWallet;
@property (nonatomic, strong) id <Ponsomizer> ponsomizer;
@property (nonatomic, strong) id <MEWConnectFacade> connectFacade;
@end
