//
//  MessageSignerInteractor.h
//
//
// 03/05/2018.
//
//

#import "MessageSignerInteractorInput.h"

@protocol MessageSignerInteractorOutput;

@protocol MEWwallet;
@protocol MEWConnectFacade;

@interface MessageSignerInteractor : NSObject <MessageSignerInteractorInput>
@property (nonatomic, weak) id<MessageSignerInteractorOutput> output;
@property (nonatomic, strong) id <MEWwallet> walletService;
@property (nonatomic, strong) id <MEWConnectFacade> connectFacade;
@end
