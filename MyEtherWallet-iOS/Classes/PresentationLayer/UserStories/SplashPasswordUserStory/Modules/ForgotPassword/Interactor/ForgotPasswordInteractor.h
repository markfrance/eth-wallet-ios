//
//  ForgotPasswordInteractor.h
//

#import "ForgotPasswordInteractorInput.h"

@protocol ForgotPasswordInteractorOutput;
@protocol AccountsService;
@protocol KeychainService;
@protocol TokensService;

@interface ForgotPasswordInteractor : NSObject <ForgotPasswordInteractorInput>
@property (nonatomic, weak) id<ForgotPasswordInteractorOutput> output;
@property (nonatomic, strong) id <AccountsService> accountsService;
@property (nonatomic, strong) id <KeychainService> keychainService;
@property (nonatomic, strong) id <TokensService> tokensService;
@end
