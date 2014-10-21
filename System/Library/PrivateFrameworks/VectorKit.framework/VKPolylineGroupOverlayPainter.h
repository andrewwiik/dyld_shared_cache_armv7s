/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VKOverlayPainter.h>
#import <VectorKit/VKPolylineGroupOverlayObserver.h>

@class VKPolylineOverlay, NSMapTable, VKPolylineOverlayPainter;

@interface VKPolylineGroupOverlayPainter : VKOverlayPainter <VKPolylineGroupOverlayObserver> {

	VKPolylineOverlay* _selectedPolyline;
	NSMapTable* _polylinesToPainters;
	bool _showTraffic;

}

@property (nonatomic,readonly) VKPolylineOverlayPainter * selectedPolylinePainter; 
@property (assign,nonatomic) bool showTraffic;                                                  //@synthesize showTraffic=_showTraffic - In the implementation block
-(void)dealloc;
-(void)stylesheetDidChange;
-(void)setContainerModel:(id)arg1 ;
-(void)layoutWithContext:(id)arg1 tiles:(id)arg2 keysInView:(id)arg3 ;
-(void)drawWithContext:(id)arg1 tiles:(id)arg2 ;
-(void)drawDebug:(id)arg1 tiles:(id)arg2 ;
-(id)initWithOverlay:(id)arg1 ;
-(bool)showTraffic;
-(void)setShowTraffic:(bool)arg1 ;
-(void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2 ;
-(void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2 ;
-(void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2 ;
-(void)_addPainterForOverlay:(id)arg1 ;
-(id)selectedPolylinePainter;
@end
