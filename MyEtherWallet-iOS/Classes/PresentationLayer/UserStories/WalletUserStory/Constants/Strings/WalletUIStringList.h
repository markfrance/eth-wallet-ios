//
//  WalletUIStringList.h
//
//
// 3/19/19.
//
//

#import "UIStringList.h"

NS_ASSUME_NONNULL_BEGIN

@interface WalletUIStringList : UIStringList

#pragma mark - QRScanner
@property (class, strong, readonly) NSString *qrScannerInProgressTitle;
@property (class, strong, readonly) NSString *qrScannerFailureTitle;
@property (class, strong, readonly) NSString *qrScannerSuccessTitle;
@property (class, strong, readonly) NSString *qrScannerSuccessDescription;
@property (class, strong, readonly) NSString *qrScannerTryAgainTitle;
@property (class, strong, readonly) NSString *qrScannerContactSupportTitle;
@property (class, strong, readonly) NSString *qrScannerNoAccessTitle;
@property (class, strong, readonly) NSArray <NSString *> *qrScannerNoAccessTitleLinked;

#pragma mark - Share
@property (class, strong, readonly) NSString *addressCopied;

@end

NS_ASSUME_NONNULL_END
