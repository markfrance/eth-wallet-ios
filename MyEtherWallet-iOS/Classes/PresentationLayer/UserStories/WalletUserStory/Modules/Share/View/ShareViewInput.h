//
//  ShareViewInput.h
//
//
// 11/10/2018.
//
//

@import Foundation;

#import "BlockchainNetworkTypes.h"

@protocol ShareViewInput <NSObject>
- (void) setupInitialStateWithAddress:(NSString *)address qrCode:(UIImage *)qrCode network:(BlockchainNetworkType)network;
- (void) presentShareWithItems:(NSArray *)items;
- (void) showToastAddressCopied;
@end
