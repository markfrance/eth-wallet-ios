//
//  ValidatorComponents.h
//
//
// 08/11/2018.
//
//

@import Foundation;

@protocol ObjectValidator;

NS_ASSUME_NONNULL_BEGIN

@protocol ValidatorComponents <NSObject>
- (id <ObjectValidator>) mnemonicsValidator;
@end

NS_ASSUME_NONNULL_END
