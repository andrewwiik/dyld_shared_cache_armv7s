/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/ESDBlipContext.h>

@interface ESDMetafileBlipContext : ESDBlipContext {

	unsigned mCb;
	unsigned defaultHeaderSize;

}

@property (assign) unsigned defaultHeaderSize; 
-(bool)loadDelayedNode:(id)arg1 ;
-(id)initWithOffset:(unsigned)arg1 byteCount:(unsigned)arg2 uncompressed:(unsigned)arg3 stream:(SsrwOOStream*)arg4 streamID:(unsigned)arg5 ;
-(void)setDefaultHeaderSize:(unsigned)arg1 ;
-(unsigned)defaultHeaderSize;
@end
