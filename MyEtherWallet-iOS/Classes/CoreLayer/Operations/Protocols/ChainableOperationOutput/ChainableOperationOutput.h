//
//  ChainableOperationOutput.h
//
//
// 20/05/2018.
//
//

@import Foundation;

@protocol ChainableOperationOutput <NSObject>
- (void) didCompleteChainableOperationWithOutputData:(id)outputData;
@end
