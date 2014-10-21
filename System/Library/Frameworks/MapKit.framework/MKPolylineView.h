/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathView.h>

@class MKPolyline;

@interface MKPolylineView : MKOverlayPathView

@property (nonatomic,readonly) MKPolyline * polyline; 
-(void)drawMapRect:(SCD_Struct_MK2)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(void)createPath;
-(id)initWithPolyline:(id)arg1 ;
-(id)polyline;
@end

