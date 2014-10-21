/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKClassicGlobeCanvas, NSMapTable;

@interface VKGlobePointCache : NSObject {

	VKClassicGlobeCanvas* _canvas;
	NSMapTable* _poiMapTable;

}

@property (assign,nonatomic) VKClassicGlobeCanvas * canvas;              //@synthesize canvas=_canvas - In the implementation block
-(void)dealloc;
-(id)init;
-(id)canvas;
-(void)setCanvas:(id)arg1 ;
-(id)addHandleAtCoordinate:(CGPoint)arg1 withHighPrecision:(bool)arg2 ;
-(void)removeHandle:(id)arg1 ;
-(VKPoint)pointForHandle:(id)arg1 atCoordinate:(CGPoint)arg2 withHighPrecision:(bool)arg3 ;
@end
