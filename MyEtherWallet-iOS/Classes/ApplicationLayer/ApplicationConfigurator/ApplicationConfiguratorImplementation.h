//
//  ApplicationConfiguratorImplementation.h
//
//
// 15/04/2018.
//
//

@import Foundation;

#import "ApplicationConfigurator.h"

@protocol KeychainService;


@interface ApplicationConfiguratorImplementation : NSObject <ApplicationConfigurator>
@property (nonatomic, strong) id <KeychainService> keychainService;
@end
