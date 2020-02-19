//
//  TokensServiceImplementation.h
//
//
// 20/05/2018.
//
//

#import "TokensService.h"

@class TokensOperationFactory;
@protocol OperationScheduler;

@interface TokensServiceImplementation : NSObject <TokensService>
@property (nonatomic, strong) TokensOperationFactory *tokensOperationFactory;
@property (nonatomic, strong) id <OperationScheduler> operationScheduler;
@end
