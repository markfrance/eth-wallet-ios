//
//  CameraServiceImplementation.h
//
//
// 19/05/2018.
//
//

#import "CameraService.h"

@class AVCaptureSession;

@interface CameraServiceImplementation : NSObject <CameraService>
- (instancetype) initWithSession:(AVCaptureSession *)session
           captureMetadataOutput:(AVCaptureMetadataOutput *)metadataOutput
                       mediaType:(AVMediaType)mediaType;
@end
