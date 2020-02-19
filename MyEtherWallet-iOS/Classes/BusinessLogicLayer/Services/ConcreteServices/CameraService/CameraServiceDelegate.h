//
//  CameraServiceDelegate.h
//
//
// 19/05/2018.
//
//

@import Foundation;

@protocol CameraService;

@protocol CameraServiceDelegate <NSObject>
- (void) cameraServiceDidStartReading:(id <CameraService>)cameraService;
- (void) cameraServiceDidStopReading:(id <CameraService>)cameraService;
- (void) cameraService:(id <CameraService>)cameraService didScanQRCode:(NSString *)QRCode;
@end
