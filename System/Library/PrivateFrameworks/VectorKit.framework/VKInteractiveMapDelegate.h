/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VKInteractiveMapDelegate <NSObject>
@required
-(void)mapDidChangeVisibleRegion:(id)arg1;
-(void)mapDidDraw:(id)arg1;
-(void)mapDidBecomePartiallyDrawn:(id)arg1;
-(void)mapDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(bool)arg2;
-(void)mapDidStartLoadingTiles:(id)arg1;
-(void)mapDidFinishLoadingTiles:(id)arg1;
-(void)mapDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
-(void)mapDidFinishChangingMapDisplayStyle:(long long)arg1;
-(void)map:(id)arg1 willChangeRegionAnimated:(bool)arg2;
-(void)map:(id)arg1 didChangeRegionAnimated:(bool)arg2;
-(id)map:(id)arg1 presentationForAnnotation:(id)arg2;
-(void)map:(id)arg1 willAnimateInAnnotationMarkers:(id)arg2;
-(void)map:(id)arg1 didAnimateInAnnotationMarkers:(id)arg2;
-(void)map:(id)arg1 didFinishAddingAnnotationMarkers:(id)arg2;
-(id)map:(id)arg1 painterForOverlay:(id)arg2;
-(void)map:(id)arg1 didBecomePitched:(bool)arg2;
-(void)map:(id)arg1 canEnter3DModeDidChange:(bool)arg2;
-(void)map:(id)arg1 canZoomInDidChange:(bool)arg2;
-(void)map:(id)arg1 canZoomOutDidChange:(bool)arg2;
-(void)map:(id)arg1 canShowFlyoverDidChange:(bool)arg2;
-(void)map:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
-(void)map:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
@end

