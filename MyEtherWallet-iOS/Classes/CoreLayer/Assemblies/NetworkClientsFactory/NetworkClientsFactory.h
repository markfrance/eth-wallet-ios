//
//  NetworkClientsFactory.h
//
//
// 21/05/2018.
//
//

@import Foundation;

@protocol NetworkClient;

@protocol NetworkClientsFactory <NSObject>
- (id<NetworkClient>) networkClientWithClientType:(NSNumber *)networkClientType;
@end

