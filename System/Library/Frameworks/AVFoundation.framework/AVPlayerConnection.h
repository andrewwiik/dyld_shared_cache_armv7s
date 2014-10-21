/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVWeakReference, NSError, AVPlayerItem, AVPlayer;

@interface AVPlayerConnection : NSObject {

	AVWeakReference* _playerReference;
	AVWeakReference* _playerItemReference;
	bool _shouldAppendItem;
	long long _status;
	NSError* _error;
	AVPlayerItem* _previousPlayerItem;

}

@property (nonatomic,readonly) AVPlayer * player; 
@property (nonatomic,readonly) AVPlayerItem * playerItem; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * serializationQueue; 
-(bool)addItemToPlayQueue;
-(void)removeItemFromPlayQueue;
-(id)initWithWeakReferenceToPlayer:(id)arg1 weakReferenceToPlayerItem:(id)arg2 shouldAppendItem:(bool)arg3 ;
-(id)serializationQueue;
-(id)playerItem;
-(void)dealloc;
-(id)description;
-(long long)status;
-(id)error;
-(id)player;
@end

