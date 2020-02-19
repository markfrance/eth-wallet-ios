//
//  TransactionInteractorOutput.h
//
//
// 28/04/2018.
//
//

@import Foundation;

@class MEWConnectResponse;

@protocol TransactionInteractorOutput <NSObject>
- (void) transactionDidSigned:(MEWConnectResponse *)response;
@end
