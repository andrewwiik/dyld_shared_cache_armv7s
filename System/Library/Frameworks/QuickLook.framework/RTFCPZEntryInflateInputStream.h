/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/RTFCPZEntryInputStream.h>

@protocol RTFCPZArchiveInputStream;
@interface RTFCPZEntryInflateInputStream : NSObject <RTFCPZEntryInputStream> {

	z_stream_s* mStream;
	long long mOffset;
	long long mEnd;
	unsigned long long mCalculatedCrc;
	unsigned long long mCheckCrc;
	<RTFCPZArchiveInputStream>* mInput;
	char* mOutBuffer;
	unsigned long long mOutBufferSize;

}
-(id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long long)arg4 input:(id)arg5 ;
-(void)dealloc;
-(id).cxx_construct;
-(void)readToOwnBuffer:(const char**)arg1 size:(unsigned long long*)arg2 ;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
@end

