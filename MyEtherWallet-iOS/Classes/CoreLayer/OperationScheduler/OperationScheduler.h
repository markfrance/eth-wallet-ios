//
//  OperationScheduler.h
//
//
// 20/05/2018.
//
//

@import Foundation;

@protocol OperationScheduler <NSObject>
- (void) addOperation:(NSOperation *)operation;
- (void) cancelAllOperations;
@end
