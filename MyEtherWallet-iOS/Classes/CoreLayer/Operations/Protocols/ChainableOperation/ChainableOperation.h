//
//  ChainableOperation.h
//
//
// 20/05/2018.
//
//

@import Foundation;

#import "ChainableOperationInput.h"
#import "ChainableOperationOutput.h"
#import "ChainableOperationDelegate.h"
#import "OperationDebugDescriptionFormatter.h"

@protocol ChainableOperation <NSObject>
@property (nonatomic, weak) id<ChainableOperationDelegate> delegate;
@property (nonatomic, strong) id<ChainableOperationInput> input;
@property (nonatomic, strong) id<ChainableOperationOutput> output;
@end
