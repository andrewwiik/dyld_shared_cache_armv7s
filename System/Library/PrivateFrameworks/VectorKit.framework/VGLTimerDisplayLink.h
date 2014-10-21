/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VGLDisplayLink.h>

@class NSTimer;

@interface VGLTimerDisplayLink : VGLDisplayLink {

	NSTimer* _timer;
	double _lastTimestamp;
	long long _frameInterval;
	long long _skippedFrames;
	bool _paused;

}
-(void)_timerFired:(id)arg1 ;
-(bool)isPaused;
-(void)dealloc;
-(double)timestamp;
-(void)invalidate;
-(void)setFrameInterval:(long long)arg1 ;
-(void)addToRunLoop:(id)arg1 forMode:(id)arg2 ;
-(long long)frameInterval;
-(void)setPaused:(bool)arg1 ;
-(void)_setup;
-(void)setDisplay:(id)arg1 ;
@end
