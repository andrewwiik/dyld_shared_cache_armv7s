/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:38 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ApplePushService/APSMessage.h>

@interface APSOutgoingMessage : APSMessage

@property (assign,nonatomic) unsigned long long timeout; 
@property (assign,getter=isCritical,nonatomic) bool critical; 
@property (assign,nonatomic) unsigned long long payloadFormat; 
@property (assign,nonatomic) unsigned long long payloadLength; 
-(void)setTimeout:(unsigned long long)arg1 ;
-(unsigned long long)timeout;
-(id)timestamp;
-(void)setTimestamp:(id)arg1 ;
-(void)setCancelled:(bool)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(unsigned long long)_effectiveSendTimeout;
-(id)sendTimeoutTime;
-(bool)wasSent;
-(void)setSent:(bool)arg1 ;
-(long long)sendInterface;
-(void)setSendInterface:(long long)arg1 ;
-(unsigned long long)payloadFormat;
-(unsigned long long)payloadLength;
-(void)setPayloadLength:(unsigned long long)arg1 ;
-(void)setTimedOut:(bool)arg1 ;
-(void)setPayloadFormat:(unsigned long long)arg1 ;
-(void)setCritical:(bool)arg1 ;
-(void)setMessageID:(unsigned long long)arg1 ;
-(bool)wasCancelled;
-(unsigned long long)messageID;
-(bool)isCritical;
-(bool)hasTimedOut;
@end

