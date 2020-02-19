//
//  ShareInteractorInput.h
//
//
// 11/10/2018.
//
//

@import Foundation;

#import "BlockchainNetworkTypes.h"

@class MasterTokenPlainObject;

@protocol ShareInteractorInput <NSObject>
- (void) configureWithMasterToken:(MasterTokenPlainObject *)masterToken;
- (NSString *) obtainPublicAddress;
- (UIImage *) obtainQRCode;
- (BlockchainNetworkType) obtainNetworkType;
- (void) copyAddress;
- (NSArray *) shareActivityItems;
@end
