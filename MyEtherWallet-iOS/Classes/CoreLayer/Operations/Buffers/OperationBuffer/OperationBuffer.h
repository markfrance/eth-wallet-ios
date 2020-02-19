//
//  OperationBuffer.h
//
//
// 20/05/2018.
//
//

@import Foundation;

#import "ChainableOperationInput.h"
#import "ChainableOperationOutput.h"
#import "CompoundOperationQueueInput.h"
#import "CompoundOperationQueueOutput.h"

@interface OperationBuffer : NSObject <ChainableOperationInput, ChainableOperationOutput, CompoundOperationQueueInput, CompoundOperationQueueOutput>
+ (instancetype)buffer;
@end
