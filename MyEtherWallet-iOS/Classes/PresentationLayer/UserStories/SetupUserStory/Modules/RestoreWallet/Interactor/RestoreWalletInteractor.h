//
//  RestoreWalletInteractor.h
//
//
// 28/04/2018.
//
//

#import "RestoreWalletInteractorInput.h"

@protocol MEWwallet;

@protocol RestoreWalletInteractorOutput;
@protocol ObjectValidator;

@interface RestoreWalletInteractor : NSObject <RestoreWalletInteractorInput>
@property (nonatomic, weak) id<RestoreWalletInteractorOutput> output;
@property (nonatomic, strong) id<MEWwallet> walletService;
@property (nonatomic, strong) id<ObjectValidator> mnemonicsValidator;
@end
