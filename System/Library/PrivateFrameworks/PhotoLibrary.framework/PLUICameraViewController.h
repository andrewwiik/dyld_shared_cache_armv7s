/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLCameraViewController.h>
#import <UIKit/UIImagePickerCameraViewController.h>

@interface PLUICameraViewController : PLCameraViewController <UIImagePickerCameraViewController> {

	long long _previousStatusBarStyle;
	long long _newStatusBarStyle;
	CGAffineTransform _previewViewTransform;

}
-(void)dealloc;
-(id)init;
-(long long)preferredStatusBarStyle;
-(bool)prefersStatusBarHidden;
-(long long)preferredStatusBarUpdateAnimation;
-(bool)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(bool)_showsCameraControls;
-(void)_setShowsCameraControls:(bool)arg1 ;
-(id)_cameraOverlayView;
-(void)_setCameraOverlayView:(id)arg1 ;
-(CGAffineTransform)_cameraViewTransform;
-(void)_setCameraViewTransform:(CGAffineTransform)arg1 ;
-(void)_takePicture;
-(bool)_startVideoCapture;
-(void)_stopVideoCapture;
-(long long)_cameraDevice;
-(void)_setCameraDevice:(long long)arg1 ;
-(long long)_cameraCaptureMode;
-(void)_setCameraCaptureMode:(long long)arg1 ;
-(long long)_cameraFlashMode;
-(void)_setCameraFlashMode:(long long)arg1 ;
-(long long)_imagePickerStatusBarStyle;
-(void)_setImagePickerMediaTypes:(id)arg1 ;
-(bool)_displaysFullScreen;
-(void)setAllowsEditing:(bool)arg1 ;
-(id)_cameraView;
-(void)_editabilityChanged:(id)arg1 ;
-(void)setWantsImageData:(bool)arg1 ;
-(void)_windowOrientationWillChange:(id)arg1 ;
-(void)_adjustContentSizeForOrientation:(long long)arg1 ;
-(void)cameraViewCancelled:(id)arg1 ;
-(void)cameraViewWillRetakePhoto:(id)arg1 ;
-(void)cameraViewWillPreviewPhoto:(id)arg1 ;
-(void)cameraView:(id)arg1 photoSaved:(id)arg2 ;
-(void)cameraView:(id)arg1 videoSavedToPath:(id)arg2 editingInfo:(id)arg3 ;
-(bool)cameraViewShouldShowPreviewAfterSelection:(id)arg1 ;
@end

