//
//  ReachabilityServiceImplementation.m
//
//
// 31/07/2018.
//
//

@import AFNetworking.AFNetworkReachabilityManager;
@import libextobjc.EXTScope;

#import "ReachabilityServiceImplementation.h"

#import "ReachabilityServiceDelegate.h"

@implementation ReachabilityServiceImplementation

- (instancetype) initWithNetworkReachabilityManager:(AFNetworkReachabilityManager *)manager {
  self = [super init];
  if (self) {
    _reachabilityManager = manager;
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(_applicationDidBecomeActive:) name:UIApplicationDidBecomeActiveNotification object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(_applicationWillResignActive:) name:UIApplicationWillResignActiveNotification object:nil];
    @weakify(self);
    [self.reachabilityManager setReachabilityStatusChangeBlock:^(AFNetworkReachabilityStatus status) {
      @strongify(self);
      dispatch_async(dispatch_get_main_queue(), ^{
        [self.delegate reachabilityStatusDidChanged:(status == AFNetworkReachabilityStatusReachableViaWiFi || status == AFNetworkReachabilityStatusReachableViaWWAN)];
      });
    }];
    if ([UIApplication sharedApplication].applicationState == UIApplicationStateActive) {
      [self.reachabilityManager startMonitoring];
    }
  }
  return self;
}

- (void) dealloc {
  [self.reachabilityManager stopMonitoring];
}

#pragma mark - Notification

- (void) _applicationDidBecomeActive:(__unused NSNotification *)notification {
  [self.reachabilityManager startMonitoring];
}

- (void) _applicationWillResignActive:(__unused NSNotification *)notification {
  [self.reachabilityManager stopMonitoring];
}

#pragma mark - ReachabilityService

- (BOOL) isReachable {
  return self.reachabilityManager.reachable;
}

@end
