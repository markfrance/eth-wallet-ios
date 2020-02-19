//
//  MEWConnectFacadeImplementation.h
//
//
// 19/05/2018.
//
//

#import "MEWConnectFacade.h"

@protocol MEWConnectService;
@protocol BlockchainNetworkService;
@protocol Ponsomizer;

@interface MEWConnectFacadeImplementation : NSObject <MEWConnectFacade>
@property (nonatomic, strong) id <MEWConnectService> connectService;
@property (nonatomic, strong) id <BlockchainNetworkService> networkService;
@property (nonatomic, strong) id <Ponsomizer> ponsomizer;
@property (nonatomic, weak) UIApplication *application;
@end
