//
//  ReachabilityServiceDelegate.h
//
//
// 31/07/2018.
//
//

@import Foundation;

@protocol ReachabilityServiceDelegate <NSObject>
- (void) reachabilityStatusDidChanged:(BOOL)isReachable;
@end
