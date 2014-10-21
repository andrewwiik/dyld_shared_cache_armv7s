/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:00 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/DataAccess-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@class NSData, ASTrafficLogger;

@interface DAConvertCRtoCRLFStream : NSInputStream {

	NSData* _mimeData;
	NSData* _preflightData;
	NSData* _postflightData;
	unsigned long long _totalLength;
	unsigned long long _readOffset;
	bool _lastByteCopiedWasCR;
	bool _openEventSent;
	unsigned long long _streamStatus;
	bool _intendToStream;
	id _delegate;
	CFRunLoopSourceRef _rls;
	/*function pointer*/ void* _clientCallback;
	SCD_Struct_DA8* _clientContext;
	ASTrafficLogger* _trafficLogger;

}
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned long long)streamStatus;
-(id)streamError;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(bool)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(bool)hasBytesAvailable;
-(bool)_setCFClientFlags:(unsigned long long)arg1 callback:(/*function pointer*/ void*)arg2 context:(SCD_Struct_DA8*)arg3 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithData:(id)arg1 ;
-(void)close;
-(id)initWithMIMEData:(id)arg1 preflightData:(id)arg2 postflightData:(id)arg3 intendToStream:(bool)arg4 ;
-(void)_scheduleCallback;
-(void)_streamEventTrigger;
-(void)open;
@end

