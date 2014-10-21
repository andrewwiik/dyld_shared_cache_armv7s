/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VKMapViewDelegate <NSObject>
@optional
-(void)mapLayer:(id)arg1 annotationMarker:(id)arg2 didChangeDragState:(long long)arg3 fromOldState:(long long)arg4;
-(void)mapLayer:(id)arg1 canEnter3DModeDidChange:(bool)arg2;
-(void)mapLayer:(id)arg1 canShowFlyoverDidChange:(bool)arg2;
-(void)mapLayer:(id)arg1 showingFlyoverDidChange:(bool)arg2;
-(void)mapLayerDidStartLoadingTiles:(id)arg1;
-(void)mapLayerDidFinishLoadingTiles:(id)arg1;
-(void)mapLayerDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
-(void)mapLayerDidChangeVisibleRegion:(id)arg1;
-(void)mapLayerDidDraw:(id)arg1;
-(void)mapLayer:(id)arg1 willChangeRegionAnimated:(bool)arg2;
-(void)mapLayer:(id)arg1 didChangeRegionAnimated:(bool)arg2;
-(id)mapLayer:(id)arg1 presentationForAnnotation:(id)arg2;
-(void)mapLayer:(id)arg1 willAnimateInAnnotationMarkers:(id)arg2;
-(void)mapLayer:(id)arg1 didAnimateInAnnotationMarkers:(id)arg2;
-(void)mapLayer:(id)arg1 didFinishAddingAnnotationMarkers:(id)arg2;
-(id)mapLayer:(id)arg1 painterForOverlay:(id)arg2;
-(void)mapLayerDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(bool)arg2;
-(void)mapLayerDidBecomePartiallyDrawn:(id)arg1;
-(void)mapLayer:(id)arg1 didBecomePitched:(bool)arg2;
-(void)mapLayer:(id)arg1 canZoomInDidChange:(bool)arg2;
-(void)mapLayer:(id)arg1 canZoomOutDidChange:(bool)arg2;
-(void)mapLayer:(id)arg1 didFinishChangingMapDisplayStyle:(long long)arg2;
-(void)mapLayer:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
-(void)mapLayer:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
@end

