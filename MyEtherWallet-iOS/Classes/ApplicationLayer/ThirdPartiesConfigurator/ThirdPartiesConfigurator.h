//
//  ThirdPartiesConfigurator.h
//
//
// 15/04/2018.
//
//

@import Foundation;

@protocol ThirdPartiesConfigurator <NSObject>
- (void) configurate;
- (void) cleanup;
@end
