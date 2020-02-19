//
//  CompoundOperationDebugDescriptionFormatter.h
//
//
// 20/05/2018.
//
//

@import Foundation;

@class CompoundOperationBase;

@interface CompoundOperationDebugDescriptionFormatter : NSObject
+ (NSString *) debugDescriptionForCompoundOperation:(CompoundOperationBase *)compoundOperation withInternalQueue:(NSOperationQueue *)internalQueue;
@end
