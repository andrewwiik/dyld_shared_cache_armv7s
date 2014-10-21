/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:00 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/SFUSimpleOutputStream.h>

@protocol SFUOutputStream;
@class SFUMoveableFileOutputStream, OISFUCryptoKey, NSData, NSMutableArray, SFUZipOutputEntry, SFUZipFreeSpaceEntry;

@interface SFUZipArchiveOutputStream : NSObject <SFUSimpleOutputStream> {

	SFUMoveableFileOutputStream* mOutputStream;
	OISFUCryptoKey* mCryptoKey;
	NSData* mPassphraseHint;
	NSData* mEncryptedDocumentUuid;
	NSMutableArray* mEntries;
	SFUZipOutputEntry* mCurrentEntry;
	SFUZipOutputEntry* mLastEntryInFile;
	<SFUOutputStream>* mEntryOutputStream;
	char* mBuffer;
	NSMutableArray* mFreeList;
	SFUZipFreeSpaceEntry* mCurrentFreeSpace;
	unsigned long long mFreeBytes;

}
+(unsigned long long)approximateBytesForEntryHeaderWithName:(id)arg1 ;
-(void)finishEntry;
-(unsigned long long)writeLocalFileHeaderForEntry:(id)arg1 ;
-(void)writeCentralFileHeaderUsingEntry:(id)arg1 isFirstEntry:(bool)arg2 ;
-(void)writeEndOfCentralDirectoryWithOffset:(long long)arg1 ;
-(void)coalesceAndTruncateFreeSpace;
-(void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1 ;
-(void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1 ;
-(id)entryNames;
-(void)dealloc;
-(void)flush;
-(void)close;
-(void)reset;
-(id)initWithPath:(id)arg1 ;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(void)moveToPath:(id)arg1 ;
-(id)initWithPath:(id)arg1 cryptoKey:(id)arg2 passphraseHint:(id)arg3 ;
-(id)initWithOutputStream:(id)arg1 cryptoKey:(id)arg2 passphraseHint:(id)arg3 ;
-(void)beginEntryWithName:(id)arg1 isCompressed:(bool)arg2 uncompressedSize:(unsigned long long)arg3 ;
-(void)beginUnknownSizeEntryWithName:(id)arg1 isCompressed:(bool)arg2 ;
-(id)beginUncompressedUnknownSizeEntryWithName:(id)arg1 ;
-(void)setCrc32ForCurrentEntry:(unsigned)arg1 ;
-(bool)canRemoveEntryWithName:(id)arg1 ;
-(void)removeEntryWithName:(id)arg1 ;
-(void)setEncryptedDocumentUuid:(id)arg1 ;
-(id)entriesAtPath:(id)arg1 ;
-(unsigned long long)freeBytes;
-(unsigned)crc32ForEntry:(id)arg1 ;
@end

