//
//  ThirdPartiesConfiguratorImplementation.m
//
//
// 15/04/2018.
//
//

@import WebRTC;

#import "ThirdPartiesConfiguratorImplementation.h"

@implementation ThirdPartiesConfiguratorImplementation

- (void) configurate {
  /* Logger */
  [DDLog addLogger:[DDTTYLogger sharedInstance]];
#if !DEBUG
  [DDLog addLogger:[DDOSLogger sharedInstance]];
#endif
  /* WebRTC */
  RTCInitializeSSL();
}

- (void) cleanup {
  /* WebRTC */
  RTCCleanupSSL();
}

@end
