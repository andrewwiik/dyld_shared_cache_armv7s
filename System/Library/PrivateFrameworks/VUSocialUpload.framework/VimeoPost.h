/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VimeoPostDelegate;
@class NSURL, NSString, ALAssetsLibrary, NSData, NSArray, ACAccount, ALAsset, VUDataReader;

@interface VimeoPost : NSObject {

	NSURL* _baseURL;
	int _uploadState;
	NSString* _videoID;
	NSString* _ticketID;
	NSURL* _uploadEndpoint;
	bool _continuingUpload;
	unsigned long long _lastByteStored;
	int _retryCount;
	bool _canUploadOverCellular;
	ALAssetsLibrary* _assetsLibrary;
	<VimeoPostDelegate>* _delegate;
	NSURL* _assetURL;
	NSData* _assetData;
	NSString* _title;
	NSString* _description;
	NSArray* _tags;
	unsigned long long _accessType;
	long long _videoSize;
	long long _privacySettings;
	ACAccount* _account;
	ALAsset* _asset;
	NSURL* _exportedVideoURL;
	VUDataReader* _dataReader;

}

@property (assign,nonatomic) <VimeoPostDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * assetURL;                            //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,retain) NSData * assetData;                          //@synthesize assetData=_assetData - In the implementation block
@property (nonatomic,retain) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * description;                      //@synthesize description=_description - In the implementation block
@property (nonatomic,retain) NSArray * tags;                              //@synthesize tags=_tags - In the implementation block
@property (assign,nonatomic) unsigned long long accessType;               //@synthesize accessType=_accessType - In the implementation block
@property (assign,nonatomic) long long videoSize;                         //@synthesize videoSize=_videoSize - In the implementation block
@property (assign,nonatomic) long long privacySettings;                   //@synthesize privacySettings=_privacySettings - In the implementation block
@property (nonatomic,retain) ACAccount * account;                         //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) ALAsset * asset;                             //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSURL * exportedVideoURL;                    //@synthesize exportedVideoURL=_exportedVideoURL - In the implementation block
@property (nonatomic,retain) VUDataReader * dataReader;                   //@synthesize dataReader=_dataReader - In the implementation block
+(bool)_isUsingCellular;
+(id)dictionaryWithResponseData:(id)arg1 error:(id*)arg2 ;
+(void)getAvailableQuotaForAccount:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_commit;
-(id)assetsLibrary;
-(long long)privacySettings;
-(void)setPrivacySettings:(long long)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(id)delegate;
-(id)initWithDictionary:(id)arg1 ;
-(id)title;
-(void)_cleanup;
-(void)setAsset:(id)arg1 ;
-(id)asset;
-(void)setTags:(id)arg1 ;
-(id)tags;
-(void)_verify;
-(id)assetData;
-(id)account;
-(void)setAccount:(id)arg1 ;
-(id)assetURL;
-(void)setDescription:(id)arg1 ;
-(void)setAssetURL:(id)arg1 ;
-(long long)videoSize;
-(void)setVideoSize:(long long)arg1 ;
-(void)setAssetData:(id)arg1 ;
-(id)_tags;
-(id)exportedVideoURL;
-(void)_errorWithCode:(int)arg1 ;
-(void)setExportedVideoURL:(id)arg1 ;
-(void)setDataReader:(id)arg1 ;
-(void)_checkQuota;
-(unsigned long long)postSize;
-(void)_getTicket;
-(void)_warningWithCode:(int)arg1 ;
-(void)_uploadData;
-(void)uploadToAccount:(id)arg1 ;
-(void)_setTitle;
-(void)_setDescription;
-(void)_setTags;
-(void)_setPrivacy;
-(id)serializedDictionary;
-(unsigned long long)accessType;
-(void)setAccessType:(unsigned long long)arg1 ;
-(id)dataReader;
@end
