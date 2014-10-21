/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VKCameraControllerDelegate <NSObject>
@required
-(void)runAnimation:(id)arg1;
-(void)cameraControllerDidChangeCameraState:(id)arg1;
-(void)cameraController:(id)arg1 willChangeRegionAnimated:(bool)arg2;
-(void)cameraController:(id)arg1 didChangeRegionAnimated:(bool)arg2;
-(void)cameraController:(id)arg1 didBecomePitched:(bool)arg2;
-(void)cameraController:(id)arg1 canEnter3DModeDidChange:(bool)arg2;
-(id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
-(void)cameraController:(id)arg1 canZoomInDidChange:(bool)arg2;
-(void)cameraController:(id)arg1 canZoomOutDidChange:(bool)arg2;
-(void)cameraController:(id)arg1 requestsDisplayRate:(long long)arg2;
@end

