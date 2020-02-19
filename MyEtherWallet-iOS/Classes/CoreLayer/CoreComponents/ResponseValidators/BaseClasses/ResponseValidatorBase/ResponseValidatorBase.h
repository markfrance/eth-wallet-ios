//
//  ResponseValidatorBase.h
//
//
// 21/05/2018.
//
//

@import Foundation;

FOUNDATION_EXPORT NSString *const kResponseValidationErrorDomain;

@interface ResponseValidatorBase : NSObject
- (BOOL)validateResponseIsDictionaryClass:(id)response error:(NSError **)error;
- (BOOL)validateResponseIsArrayClass:(id)response error:(NSError **)error;
@end
