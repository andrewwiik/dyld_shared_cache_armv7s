/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface WebTiledBackingLayer : CALayer {

	OwnPtr<WebCore::TileController>* _tileController;

}
-(void)setOpaque:(bool)arg1 ;
-(void)dealloc;
-(void)setNeedsDisplay;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(void)invalidate;
-(id)actionForKey:(id)arg1 ;
-(bool)isOpaque;
-(void)setContentsScale:(double)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(void)setBorderColor:(CGColorRef)arg1 ;
-(id).cxx_construct;
-(id)initWithLayer:(id)arg1 ;
-(void).cxx_destruct;
-(id)tileContainerLayer;
-(bool)acceleratesDrawing;
-(void)setAcceleratesDrawing:(bool)arg1 ;
-(TiledBacking*)tiledBacking;
@end

