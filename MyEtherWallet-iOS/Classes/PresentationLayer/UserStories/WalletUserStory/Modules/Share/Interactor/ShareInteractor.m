//
//  ShareInteractor.m
//
//
// 11/10/2018.
//
//

#import "ShareInteractor.h"

#import "ShareInteractorOutput.h"

#import "MasterTokenPlainObject.h"
#import "NetworkPlainObject.h"

static CGFloat const kShareInteractorQRCodeSize = 155.0;

@interface ShareInteractor ()
@property (nonatomic, strong) MasterTokenPlainObject *masterToken;
@property (nonatomic, strong) UIImage *qrCode;
@end

@implementation ShareInteractor

#pragma mark - ShareInteractorInput

- (void) configureWithMasterToken:(MasterTokenPlainObject *)masterToken {
  self.masterToken = masterToken;
  
  NSString *address = masterToken.address;
  NSData *addressData = [address dataUsingEncoding:NSUTF8StringEncoding];
  
  CIFilter *qrFilter = [CIFilter filterWithName:@"CIQRCodeGenerator"];
  [qrFilter setValue:addressData forKey:@"inputMessage"];
  [qrFilter setValue:@"L" forKey: @"inputCorrectionLevel"];
  
  CIImage *qrImage = qrFilter.outputImage;
  float scaleX = kShareInteractorQRCodeSize / qrImage.extent.size.width;
  float scaleY = kShareInteractorQRCodeSize / qrImage.extent.size.height;
  
  qrImage = [qrImage imageByApplyingTransform:CGAffineTransformMakeScale(scaleX, scaleY)];
  
  self.qrCode = [UIImage imageWithCIImage:qrImage scale:[UIScreen mainScreen].scale orientation:UIImageOrientationUp];
}

- (NSString *) obtainPublicAddress {
  return self.masterToken.address;
}

- (UIImage *)obtainQRCode {
  return self.qrCode;
}

- (BlockchainNetworkType) obtainNetworkType {
  return [self.masterToken.fromNetworkMaster network];
}

- (void) copyAddress {
  [UIPasteboard generalPasteboard].string = self.masterToken.address;
}

- (NSArray *) shareActivityItems {
  return @[self.masterToken.address];
}

@end
