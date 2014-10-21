/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLCameraControllerDelegate <NSObject>
@optional
-(void)cameraController:(id)arg1 didChangeCaptureAbility:(bool)arg2;
-(void)cameraController:(id)arg1 willChangeToMode:(long long)arg2 device:(long long)arg3;
-(void)cameraControllerModeDidChange:(id)arg1;
-(void)cameraController:(id)arg1 cleanApertureDidChange:(CGRect)arg2;
-(void)cameraControllerDidSetupSession:(id)arg1;
-(void)cameraControllerWillStartPreview:(id)arg1;
-(void)cameraControllerSessionDidStart:(id)arg1;
-(void)cameraControllerSessionDidStop:(id)arg1;
-(void)cameraControllerDidStartSession:(id)arg1;
-(void)cameraControllerPreviewDidStart:(id)arg1;
-(void)cameraControllerDidStopSession:(id)arg1;
-(void)cameraControllerWillStopSession:(id)arg1;
-(void)cameraControllerSessionWasInterrupted:(id)arg1;
-(void)cameraControllerSessionInterruptionEnded:(id)arg1;
-(void)cameraControllerServerDied:(id)arg1;
-(void)cameraControllerWillTakePhoto:(id)arg1;
-(void)cameraControllerDidTakePhoto:(id)arg1;
-(void)cameraController:(id)arg1 capturedPhoto:(id)arg2 error:(id)arg3;
-(void)cameraControllerDidChangePanoramaConfiguration:(id)arg1;
-(void)cameraController:(id)arg1 didUpdatePanoramaPreview:(id)arg2;
-(void)cameraController:(id)arg1 didReceivePanoramaIssue:(int)arg2;
-(void)cameraControllerDidStartPanoramaCapture:(id)arg1;
-(void)cameraControllerWillStopPanoramaCapture:(id)arg1;
-(void)cameraControllerPanoramaWillStartProcessing:(id)arg1;
-(void)cameraControllerPanoramaDidStopProcessing:(id)arg1;
-(void)cameraController:(id)arg1 capturedPanorama:(id)arg2 error:(id)arg3;
-(void)cameraControllerVideoCaptureDidStart:(id)arg1;
-(void)cameraControllerDidStopVideoCapture:(id)arg1;
-(void)cameraControllerVideoCaptureDidStop:(id)arg1 withReason:(int)arg2 userInfo:(id)arg3;
-(void)cameraControllerWillStartAutofocus:(id)arg1;
-(void)cameraControllerFocusDidStart:(id)arg1;
-(void)cameraControllerFocusDidEnd:(id)arg1;
-(void)cameraController:(id)arg1 faceMetadataDidChange:(id)arg2;
-(void)cameraController:(id)arg1 videoZoomFactorDidChange:(double)arg2;
-(void)cameraControllerFlashWillFireChanged:(id)arg1;
-(void)cameraControllerTorchActiveChanged:(id)arg1;
-(void)cameraControllerTorchAvailabilityChanged:(id)arg1;
-(void)cameraControllerDidChangeHDRSuggestion:(id)arg1;
-(void)cameraControllerDidChangeEffectFilterIndex:(id)arg1;
-(void)cameraController:(id)arg1 willTransitionToShowEffectsGrid:(bool)arg2;
-(void)cameraController:(id)arg1 didStartTransitionToShowEffectsGrid:(bool)arg2 animated:(bool)arg3;
-(void)cameraController:(id)arg1 didFinishTransitionToShowEffectsGrid:(bool)arg2;
@end

