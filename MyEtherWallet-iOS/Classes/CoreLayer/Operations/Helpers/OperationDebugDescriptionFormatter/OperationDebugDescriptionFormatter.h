//
//  OperationDebugDescriptionFormatter.h
//
//
// 20/05/2018.
//
//

@import Foundation;

@protocol ChainableOperation;

@interface OperationDebugDescriptionFormatter : NSObject
+ (NSString *)debugDescriptionForOperation:(NSOperation <ChainableOperation> *)operation withAdditionalInfo:(NSArray *)additionalInfo;
@end
