/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OISFUDataRepresentation.h>

@class NSString, OISFUCryptoKey;

@interface SFUFileDataRepresentation : OISFUDataRepresentation {

	NSString* mPath;
	int mSharedFd;
	long long mFileLength;
	unsigned mFileType;
	bool mHasFileAttributes;
	long long mPlaintextDataLength;
	OISFUCryptoKey* mCryptoKey;
	bool mDeleteFileWhenDone;

}
-(void)readFileAttributes;
-(void)dealloc;
-(id)description;
-(id)path;
-(id)initWithPath:(id)arg1 ;
-(void)setFileType:(unsigned)arg1 ;
-(unsigned)fileType;
-(long long)dataLength;
-(id)inputStream;
-(bool)isReadable;
-(bool)hasSameLocationAs:(id)arg1 ;
-(long long)encodedLength;
-(bool)isEncrypted;
-(id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 cryptoKey:(id)arg3 dataLength:(long long)arg4 ;
-(id)initWithCopyOfData:(id)arg1 path:(id)arg2 cryptoKey:(id)arg3 ;
-(bool)isCryptoKeyIdenticalToKey:(id)arg1 ;
-(id)initWithPath:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3 ;
-(id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 ;
-(id)initWithCopyOfData:(id)arg1 path:(id)arg2 ;
-(void)deleteFileWhenDone;
@end

