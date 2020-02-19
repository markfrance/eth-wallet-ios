//
//  ServiceComponents.h
//
//
// 15/04/2018.
//
//

@import Foundation;

@protocol MEWConnectFacade;
@protocol MEWcrypto;
@protocol MEWwallet;
@protocol CameraService;
@protocol CameraServiceDelegate;
@protocol TokensService;
@protocol BlockchainNetworkService;
@protocol AccountsService;
@protocol KeychainService;
@protocol FiatPricesService;
@protocol SimplexService;
@protocol ReachabilityService;
@protocol ReachabilityServiceDelegate;
@protocol MigrationService;
@protocol SecurityService;


@protocol ServiceComponents <NSObject>
- (id <MEWConnectFacade>) MEWConnectFacade;
- (id <MEWwallet>) MEWwallet;
- (id <MEWcrypto>) MEWcrypto;
- (id <CameraService>) cameraServiceWithDelegate:(id <CameraServiceDelegate>)delegate;
- (id <TokensService>) tokensService;
- (id <BlockchainNetworkService>) blockchainNetworkService;
- (id <AccountsService>) accountsService;
- (id <KeychainService>) keychainService;
- (id <FiatPricesService>) fiatPricesService;
- (id <SimplexService>) simplexService;
- (id <ReachabilityService>) reachabilityServiceWithDelegate:(id <ReachabilityServiceDelegate>)delegate;
- (id <MigrationService>) migrationService;
- (id <SecurityService>) securityService;
@end
