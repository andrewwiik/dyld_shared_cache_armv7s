/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class AVPlayerItemErrorLogEvent, NSDate, NSString;

@interface MPMovieErrorLogEvent : NSObject <NSCopying> {

	AVPlayerItemErrorLogEvent* _event;

}

@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) NSString * URI; 
@property (nonatomic,readonly) NSString * serverAddress; 
@property (nonatomic,readonly) NSString * playbackSessionID; 
@property (nonatomic,readonly) long long errorStatusCode; 
@property (nonatomic,readonly) NSString * errorDomain; 
@property (nonatomic,readonly) NSString * errorComment; 
-(id)_initWithAVItemErrorLogEvent:(id)arg1 ;
-(id)serverAddress;
-(id)playbackSessionID;
-(long long)errorStatusCode;
-(id)errorDomain;
-(id)errorComment;
-(id)date;
-(id)copyWithZone:(NSZone)arg1 ;
-(void).cxx_destruct;
-(id)URI;
@end
