//
//  CameraService.h
//
//
// 19/05/2018.
//
//

@import Foundation;

@protocol CameraServiceDelegate;

typedef void(^CameraServiceAccessCompletion)(BOOL granted);

@protocol CameraService <NSObject>
@property (nonatomic, weak) id <CameraServiceDelegate> delegate;
- (BOOL) isHaveAccess;
- (void) isHaveAccessWithCompletion:(CameraServiceAccessCompletion)completion;
- (AVCaptureSession *) obtainSession;
- (void) startReading;
- (void) pauseReading;
- (void) stopReading;
@end
