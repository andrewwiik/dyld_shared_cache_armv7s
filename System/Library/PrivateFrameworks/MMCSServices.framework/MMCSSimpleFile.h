/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:24 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL, NSData;

@interface MMCSSimpleFile : NSObject {

	int _fd;
	double _progress;
	NSString* _authToken;
	long long _encryptionBehavior;
	NSString* _localPath;
	NSURL* _requestURL;
	NSString* _requestorID;
	NSString* _guid;
	unsigned long long _itemID;
	NSData* _signature;
	NSData* _fileHash;
	unsigned long long _protocolFileSize;

}

@property (retain) NSString * guid;                                  //@synthesize guid=_guid - In the implementation block
@property (assign) unsigned long long itemID;                        //@synthesize itemID=_itemID - In the implementation block
@property (retain) NSURL * requestURL;                               //@synthesize requestURL=_requestURL - In the implementation block
@property (retain) NSString * requestorID;                           //@synthesize requestorID=_requestorID - In the implementation block
@property (retain) NSData * signature;                               //@synthesize signature=_signature - In the implementation block
@property (retain) NSString * authToken;                             //@synthesize authToken=_authToken - In the implementation block
@property (retain) NSString * localPath;                             //@synthesize localPath=_localPath - In the implementation block
@property (assign) int fd;                                           //@synthesize fd=_fd - In the implementation block
@property (retain) NSData * fileHash;                                //@synthesize fileHash=_fileHash - In the implementation block
@property (assign) unsigned long long protocolFileSize;              //@synthesize protocolFileSize=_protocolFileSize - In the implementation block
@property (assign) double progress;                                  //@synthesize progress=_progress - In the implementation block
@property (assign) long long encryptionBehavior;                     //@synthesize encryptionBehavior=_encryptionBehavior - In the implementation block
-(id)authToken;
-(void)setAuthToken:(id)arg1 ;
-(unsigned long long)itemID;
-(int)fd;
-(void)setFd:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(void)setProtocolFileSize:(unsigned long long)arg1 ;
-(unsigned long long)protocolFileSize;
-(void)setItemID:(unsigned long long)arg1 ;
-(id)requestURL;
-(id)localPath;
-(id)guid;
-(long long)encryptionBehavior;
-(void)setRequestorID:(id)arg1 ;
-(void)setLocalPath:(id)arg1 ;
-(void)setEncryptionBehavior:(long long)arg1 ;
-(id)requestorID;
-(id)signature;
-(void)setSignature:(id)arg1 ;
-(id)fileHash;
-(void)setFileHash:(id)arg1 ;
-(void)setRequestURL:(id)arg1 ;
-(void)setGuid:(id)arg1 ;
@end

