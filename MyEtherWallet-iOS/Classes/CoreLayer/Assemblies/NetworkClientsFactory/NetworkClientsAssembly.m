//
//  NetworkClientsAssembly.m
//
//
// 21/05/2018.
//
//

#import "NetworkClientsAssembly.h"

#import "CommonNetworkClient.h"

#import "NetworkClientType.h"

@implementation NetworkClientsAssembly

- (id<NetworkClient>)networkClientWithClientType:(NSNumber *)networkClientType {
  return [TyphoonDefinition withOption:networkClientType matcher:^(TyphoonOptionMatcher *matcher) {
    [matcher caseEqual:@(NetworkClientCommonType)
                   use:[self commonNetworkClient]];
  }];
}

#pragma mark - Concrete definitions

- (id<NetworkClient>)commonNetworkClient {
  return [TyphoonDefinition withClass:[CommonNetworkClient class] configuration:^(TyphoonDefinition *definition) {
    [definition useInitializer:@selector(initWithURLSession:) parameters:^(TyphoonMethod *initializer) {
      [initializer injectParameterWith:[NSURLSession sharedSession]];
    }];
  }];
}

@end
