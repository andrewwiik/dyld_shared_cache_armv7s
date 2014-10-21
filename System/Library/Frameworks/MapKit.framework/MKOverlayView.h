/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@protocol MKOverlay;
@interface MKOverlayView : UIView {

	<MKOverlay>* _overlay;
	SCD_Struct_MK2 _boundingMapRect;
	id _renderer;

}

@property (nonatomic,readonly) <MKOverlay> * overlay;              //@synthesize overlay=_overlay - In the implementation block
-(CGPoint)pointForMapPoint:(SCD_Struct_MK1)arg1 ;
-(void)set_boundingMapRect:(SCD_Struct_MK2)arg1 ;
-(id)_mk_overlayLayer;
-(id)_mk_overlayView;
-(void)set_renderer:(id)arg1 ;
-(void)drawMapRect:(SCD_Struct_MK2)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(SCD_Struct_MK2)mapRectForRect:(CGRect)arg1 ;
-(void)setNeedsDisplayInMapRect:(SCD_Struct_MK2)arg1 ;
-(SCD_Struct_MK1)_originMapPoint;
-(SCD_Struct_MK2)_boundingMapRect;
-(bool)canDrawMapRect:(SCD_Struct_MK2)arg1 zoomScale:(double)arg2 ;
-(CGRect)rectForMapRect:(SCD_Struct_MK2)arg1 ;
-(SCD_Struct_MK1)mapPointForPoint:(CGPoint)arg1 ;
-(void)setNeedsDisplayInMapRect:(SCD_Struct_MK2)arg1 zoomScale:(double)arg2 ;
-(id)_renderer;
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)setContentScaleFactor:(double)arg1 ;
-(bool)_canDrawContent;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(id).cxx_construct;
-(id)overlay;
-(void).cxx_destruct;
-(id)initWithOverlay:(id)arg1 ;
-(bool)overlay:(id)arg1 canDrawKey:(const SCD_Struct_MK13*)arg2 ;
-(void)overlay:(id)arg1 drawKey:(const SCD_Struct_MK13*)arg2 inContext:(CGContextRef)arg3 ;
@end

