//
//  ReachabilityServiceImplementation.h
//
//
// 31/07/2018.
//
//

#import "ReachabilityService.h"

@class AFNetworkReachabilityManager;
@protocol ReachabilityServiceDelegate;

@interface ReachabilityServiceImplementation : NSObject <ReachabilityService>
@property (nonatomic, weak) id <ReachabilityServiceDelegate> delegate;
@property (nonatomic, strong, readonly) AFNetworkReachabilityManager *reachabilityManager;
- (instancetype) initWithNetworkReachabilityManager:(AFNetworkReachabilityManager *)manager;
@end
