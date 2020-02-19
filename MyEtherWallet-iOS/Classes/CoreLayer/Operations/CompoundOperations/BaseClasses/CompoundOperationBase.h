//
//  CompoundOperationBase.h
//
//
// 20/05/2018.
//
//

@import Foundation;

#import "AsyncOperation.h"

#import "CompoundOperationQueueInput.h"
#import "CompoundOperationQueueOutput.h"
#import "ChainableOperationDelegate.h"
#import "ChainableOperation.h"

typedef void(^CompoundOperationResultBlock)(id data, NSError *error);

@interface CompoundOperationBase : AsyncOperation <ChainableOperationDelegate>
@property (assign, nonatomic) NSUInteger maxConcurrentOperationsCount;
@property (nonatomic, copy) CompoundOperationResultBlock resultBlock;
@property (nonatomic, strong) id<CompoundOperationQueueInput> queueInput;
@property (nonatomic, strong) id<CompoundOperationQueueOutput> queueOutput;
- (void) addOperation:(NSOperation <ChainableOperation> *)operation;
@end
