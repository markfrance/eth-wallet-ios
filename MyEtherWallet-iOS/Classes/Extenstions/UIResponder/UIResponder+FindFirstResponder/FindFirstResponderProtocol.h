//
//  FindFirstResponderProtocol.h
//
//
// 07/11/2018.
//
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN

@protocol FindFirstResponderProtocol <NSObject>
- (nullable UIResponder *) providedFirstResponder;
@end

NS_ASSUME_NONNULL_END
