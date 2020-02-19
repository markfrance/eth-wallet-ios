//
//  WalletImageCatalog.h
//
//
// 3/19/19.
//
//

#import "ImageCatalog.h"

NS_ASSUME_NONNULL_BEGIN

@interface WalletImageCatalog : ImageCatalog

#pragma mark - QRScanner

@property (class, strong, readonly) UIImage *qrScannerConnectionSuccess;
@property (class, strong, readonly) UIImage *qrScannerConnectionFailure;

#pragma mark - Share
@property (class, strong, readonly) UIImage *shareToastIcon;

@end

NS_ASSUME_NONNULL_END
