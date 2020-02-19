//
//  OperationBuffer.m
//
//
// 20/05/2018.
//
//

#import "OperationBuffer.h"

@interface OperationBuffer ()
@property (nonatomic, strong) id buffer;
@end

@implementation OperationBuffer

+ (instancetype) buffer {
  return [[[self class] alloc] init];
}

#pragma mark - Protocol ChainableOperationInput

- (id) obtainInputData {
  return [self obtainBufferData];
}

- (id) obtainInputDataWithTypeValidationBlock:(ChainableOperationInputTypeValidationBlock)block {
  if (block) {
    return [self obtainBufferDataWithValidationBlock:block];
  }
  
  return [self obtainBufferData];
}

#pragma mark - Protocol ChainableOperationOutput

- (void) didCompleteChainableOperationWithOutputData:(id)outputData {
  [self updateBufferWithData:outputData];
}

#pragma mark - Protocol CompoundOperationQueueInput

- (void) setOperationQueueInputData:(id)inputData {
  [self updateBufferWithData:inputData];
}

#pragma mark - Protocol CompoundOperationQueueOutput

- (id) obtainOperationQueueOutputData {
  return [self obtainBufferData];
}

#pragma mark - Private Methods

- (void) updateBufferWithData:(id)data {
  self.buffer = data;
}

- (id) obtainBufferData {
  return self.buffer;
}

- (id) obtainBufferDataWithValidationBlock:(ChainableOperationInputTypeValidationBlock)block {
  id data = [self obtainBufferData];
  BOOL isBufferContentValid = block(data);
  if (!isBufferContentValid) {
    [NSException raise:NSInternalInconsistencyException format:@"Buffer %@ data has incorrect format (%@)", self, NSStringFromClass([data class])];
  }
  return data;
}

@end
