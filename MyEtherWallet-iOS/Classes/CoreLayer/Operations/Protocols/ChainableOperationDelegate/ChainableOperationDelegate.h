//
//  ChainableOperationDelegate.h
//
//
// 20/05/2018.
//
//

@import Foundation;

@protocol ChainableOperationDelegate <NSObject>
- (void)didCompleteChainableOperationWithError:(NSError *)error;
@end
