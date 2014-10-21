/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayRenderer.h>

@class UIColor, NSArray;

@interface MKOverlayPathRenderer : MKOverlayRenderer {

	UIColor* _fillColor;
	UIColor* _strokeColor;
	double _lineWidth;
	int _lineJoin;
	int _lineCap;
	double _miterLimit;
	double _lineDashPhase;
	NSArray* _lineDashPattern;
	CGPathRef _path;

}

@property (retain) UIColor * fillColor; 
@property (retain) UIColor * strokeColor; 
@property (assign) double lineWidth; 
@property (assign) int lineJoin; 
@property (assign) int lineCap; 
@property (assign) double miterLimit; 
@property (assign) double lineDashPhase; 
@property (copy) NSArray * lineDashPattern; 
@property (assign) CGPathRef path; 
-(void)applyFillPropertiesToContext:(CGContextRef)arg1 atZoomScale:(double)arg2 ;
-(void)fillPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)applyStrokePropertiesToContext:(CGContextRef)arg1 atZoomScale:(double)arg2 ;
-(void)strokePath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)invalidatePath;
-(void)drawMapRect:(SCD_Struct_MK2)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(id)lineDashPattern;
-(double)lineDashPhase;
-(void)setLineDashPhase:(double)arg1 ;
-(void)dealloc;
-(CGPathRef)path;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(void)setStrokeColor:(id)arg1 ;
-(id)fillColor;
-(id)strokeColor;
-(void)setPath:(CGPathRef)arg1 ;
-(void)setLineCap:(int)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(void)setLineDashPattern:(id)arg1 ;
-(void).cxx_destruct;
-(void)createPath;
-(int)lineJoin;
-(id)initWithOverlay:(id)arg1 ;
-(int)lineCap;
@end

