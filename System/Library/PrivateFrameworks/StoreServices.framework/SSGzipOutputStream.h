/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSOutputStream.h>

@class NSOutputStream, NSError;

@interface SSGzipOutputStream : NSOutputStream {

	NSOutputStream* _actualOutputStream;
	z_stream_s* _stream;
	NSError* _streamError;
	char* _streamOutBuffer;
	unsigned long long _streamOutBufferSize;
	unsigned long long _streamContentLength;

}
-(id)propertyForKey:(id)arg1 ;
-(bool)setProperty:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)streamStatus;
-(id)streamError;
-(id)initToMemory;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(bool)hasSpaceAvailable;
-(void)dealloc;
-(id)init;
-(void)close;
-(id)initToFileAtPath:(id)arg1 append:(bool)arg2 ;
-(long long)_consumeStreamOutput:(bool)arg1 ;
-(void)_setStreamError:(int)arg1 context:(id)arg2 ;
-(unsigned long long)streamContentLength;
-(void)open;
@end
