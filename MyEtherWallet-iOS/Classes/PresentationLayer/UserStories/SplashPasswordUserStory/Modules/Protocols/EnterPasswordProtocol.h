//
//  EnterPasswordProtocol.h
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@protocol EnterPasswordProtocol <NSObject>
- (void) passwordDidEntered:(NSString *)password;
@end

NS_ASSUME_NONNULL_END
