/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:00 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SFUZipOutputEntry : NSObject {

	NSString* name;
	unsigned long long utf8NameLength;
	bool isCompressed;
	bool isEncrypted;
	unsigned time;
	unsigned long long compressedSize;
	unsigned long long uncompressedSize;
	unsigned long long offset;
	unsigned long long compressedDataOffset;
	unsigned crc;
	bool isWrittenDirectlyToFile;
	bool is64Bit;

}
-(void)dealloc;
-(id)description;
-(long long)compareByOffset:(id)arg1 ;
@end

