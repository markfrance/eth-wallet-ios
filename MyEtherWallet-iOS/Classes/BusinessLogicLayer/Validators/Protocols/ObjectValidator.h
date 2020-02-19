//
//  ObjectValidator.h
//
//
// 08/11/2018.
//
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@protocol ObjectValidator <NSObject>
- (BOOL) isObjectValidated:(id)object;
- (nullable id) extractValidObject:(id)object;
@end

NS_ASSUME_NONNULL_END
