/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class NSString;

@interface AVAudioSessionChannelDescription : NSObject {

	void* _impl;

}

@property (readonly) NSString * channelName; 
@property (readonly) NSString * owningPortUID; 
@property (readonly) unsigned long long channelNumber; 
@property (readonly) unsigned channelLabel; 
+(id)privateCreate:(id)arg1 portUID:(id)arg2 channelNumber:(unsigned)arg3 ;
+(id)privateCreateArray:(id)arg1 portUID:(id)arg2 ;
-(id)owningPortUID;
-(ChannelDescriptionImpl*)privateGetImplementation;
-(bool)isEqualToChannel:(id)arg1 ;
-(id)channelName;
-(unsigned)channelLabel;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)channelNumber;
@end

