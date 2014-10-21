/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPAVPlaylistFeeder <NSObject>
@property (nonatomic,readonly) unsigned long long initialPlaybackQueueDepth; 
@property (nonatomic,readonly) unsigned long long itemCount; 
@required
-(unsigned long long)itemCount;
-(void)assumeOwnershipOfItems:(id)arg1;
-(bool)hasItemForIndex:(unsigned long long)arg1;
-(id)itemForIndex:(unsigned long long)arg1;
-(bool)shouldReloadForChangeFromNetworkType:(long long)arg1 toNetworkType:(long long)arg2;
-(unsigned long long)initialPlaybackQueueDepth;
@end

