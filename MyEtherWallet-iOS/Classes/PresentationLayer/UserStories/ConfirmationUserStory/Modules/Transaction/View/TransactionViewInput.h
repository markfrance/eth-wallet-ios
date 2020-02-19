//
//  TransactionViewInput.h
//
//
// 28/04/2018.
//
//

@import Foundation;

@class MEWConnectTransaction;

@protocol TransactionViewInput <NSObject>
- (void) setupInitialState;
- (void) updateWithTransaction:(MEWConnectTransaction *)transaction networkName:(NSString *)networkName;
- (void) enableSign:(BOOL)enable;
@end
