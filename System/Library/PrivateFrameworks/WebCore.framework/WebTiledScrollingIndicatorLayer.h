/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:21 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer;

@interface WebTiledScrollingIndicatorLayer : CALayer {

	TileController* _tileController;
	CALayer* _visibleRectFrameLayer;

}

@property (assign) TileController* tileController;               //@synthesize tileController=_tileController - In the implementation block
@property (assign) CALayer * visibleRectFrameLayer;              //@synthesize visibleRectFrameLayer=_visibleRectFrameLayer - In the implementation block
-(id)init;
-(void)drawInContext:(CGContextRef)arg1 ;
-(TileController*)tileController;
-(void)setTileController:(TileController*)arg1 ;
-(id)visibleRectFrameLayer;
-(void)setVisibleRectFrameLayer:(id)arg1 ;
@end

