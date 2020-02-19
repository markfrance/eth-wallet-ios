//
//  TransactionInteractor.h
//
//
// 28/04/2018.
//
//

#import "TransactionInteractorInput.h"

@protocol TransactionInteractorOutput;

@protocol MEWwallet;
@protocol MEWConnectFacade;
@protocol TokensService;
@protocol Ponsomizer;

@interface TransactionInteractor : NSObject <TransactionInteractorInput>
@property (nonatomic, weak) id<TransactionInteractorOutput> output;
@property (nonatomic, strong) id <MEWwallet> walletService;
@property (nonatomic, strong) id <MEWConnectFacade> connectFacade;
@property (nonatomic, strong) id <TokensService> tokensService;
@property (nonatomic, strong) id <Ponsomizer> ponsomizer;
@end
