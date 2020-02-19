//
//  ChainableOperationInput.h
//
//
// 20/05/2018.
//
//

@import Foundation;

typedef BOOL(^ChainableOperationInputTypeValidationBlock)(id data);

@protocol ChainableOperationInput <NSObject>
- (id) obtainInputDataWithTypeValidationBlock:(ChainableOperationInputTypeValidationBlock)block;
@end
