/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class MPUserNotification, RadioGetTracksRequest, NSLock, RadioPlaybackContext, RadioRequestContext, RadioStation;

@interface MPRadioGetTracksOperation : NSOperation {

	MPUserNotification* _explicitUserNotification;
	RadioGetTracksRequest* _getTracksRequest;
	NSLock* _lock;
	unsigned long long _numberOfTracks;
	RadioPlaybackContext* _playbackContext;
	RadioRequestContext* _requestContext;
	/*^block*/ id _responseBlock;
	long long _reasonType;
	RadioStation* _station;

}

@property (assign) unsigned long long numberOfTracks; 
@property (copy) RadioPlaybackContext * playbackContext; 
@property (readonly) long long reasonType;                            //@synthesize reasonType=_reasonType - In the implementation block
@property (retain) RadioRequestContext * requestContext; 
@property (copy) id responseBlock; 
@property (readonly) RadioStation * station;                          //@synthesize station=_station - In the implementation block
-(id)_newGetTracksRequestAllowingHeartbeatDelay:(bool)arg1 returningError:(id*)arg2 ;
-(id)_runRequestAllowingHeartbeatDelay:(bool)arg1 returningError:(id*)arg2 ;
-(id)_runFullGetTracksProcessAllowingDialog:(bool)arg1 returningError:(id*)arg2 ;
-(/*^block*/ id)responseBlock;
-(void)setResponseBlock:(/*^block*/ id)arg1 ;
-(id)_heartbeatTokenDataAllowingDelay:(bool)arg1 error:(id*)arg2 ;
-(id)playbackContext;
-(long long)reasonType;
-(void)setPlaybackContext:(id)arg1 ;
-(id)requestContext;
-(void)setRequestContext:(id)arg1 ;
-(unsigned long long)numberOfTracks;
-(void)setNumberOfTracks:(unsigned long long)arg1 ;
-(id)initWithStation:(id)arg1 reasonType:(long long)arg2 ;
-(id)station;
-(void)dealloc;
-(void)cancel;
-(void)main;
-(void).cxx_destruct;
@end

