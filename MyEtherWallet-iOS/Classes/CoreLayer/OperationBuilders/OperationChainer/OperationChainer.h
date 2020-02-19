//
//  OperationChainer.h
//
//
// 20/05/2018.
//
//

@import Foundation;

@protocol ChainableOperation;
@class OperationBuffer;
@class CompoundOperationBase;

@interface OperationChainer : NSObject
- (void)chainParentOperation:(NSOperation <ChainableOperation> *)parentOperation
          withChildOperation:(NSOperation <ChainableOperation> *)childOperation
                  withBuffer:(OperationBuffer *)buffer;
- (void)chainCompoundOperation:(CompoundOperationBase *)compoundOperation
  withChainableOperationsQueue:(NSArray <NSOperation<ChainableOperation> *> *)chainableOperationsQueue;
@end
