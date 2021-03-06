/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary, NSURL, ATStoreInfo, NSError;

@interface ATAsset : NSObject {

	NSString* _identifier;
	NSString* _dataclass;
	NSString* _assetType;
	NSDictionary* _variantOptions;
	NSString* _localPath;
	NSURL* _icon;
	NSString* _prettyName;
	bool _isDownload;
	bool _isRestore;
	bool _bypassStore;
	bool _installOnly;
	bool _readyForStore;
	long long _storePID;
	unsigned _priority;
	float _downloadProgress;
	float _installProgress;
	/*^block*/ id _storeCompletion;
	/*^block*/ id _storeInstallCompletion;
	/*^block*/ id _storeProgress;
	ATStoreInfo* _storeInfo;
	NSString* _storePlist;
	NSString* _infoPlist;
	NSError* _error;

}

@property (nonatomic,retain) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * prettyName;                      //@synthesize prettyName=_prettyName - In the implementation block
@property (nonatomic,retain) NSString * dataclass;                       //@synthesize dataclass=_dataclass - In the implementation block
@property (nonatomic,retain) NSString * assetType;                       //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,retain) NSDictionary * variantOptions;              //@synthesize variantOptions=_variantOptions - In the implementation block
@property (nonatomic,retain) NSString * path;                            //@synthesize localPath=_localPath - In the implementation block
@property (nonatomic,retain) NSURL * icon;                               //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) bool isDownload;                            //@synthesize isDownload=_isDownload - In the implementation block
@property (assign,nonatomic) bool isRestore;                             //@synthesize isRestore=_isRestore - In the implementation block
@property (assign,nonatomic) bool bypassStore;                           //@synthesize bypassStore=_bypassStore - In the implementation block
@property (assign,nonatomic) bool installOnly;                           //@synthesize installOnly=_installOnly - In the implementation block
@property (assign,nonatomic) bool readyForStore;                         //@synthesize readyForStore=_readyForStore - In the implementation block
@property (assign,nonatomic) long long storePID;                         //@synthesize storePID=_storePID - In the implementation block
@property (assign,nonatomic) unsigned priority;                          //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) float downloadProgress;                     //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign,nonatomic) float installProgress;                      //@synthesize installProgress=_installProgress - In the implementation block
@property (assign,nonatomic) id storeCompletion;                         //@synthesize storeCompletion=_storeCompletion - In the implementation block
@property (assign,nonatomic) id storeInstallCompletion;                  //@synthesize storeInstallCompletion=_storeInstallCompletion - In the implementation block
@property (assign,nonatomic) id storeProgress;                           //@synthesize storeProgress=_storeProgress - In the implementation block
@property (nonatomic,retain) ATStoreInfo * storeInfo;                    //@synthesize storeInfo=_storeInfo - In the implementation block
@property (nonatomic,retain) NSString * storePlist;                      //@synthesize storePlist=_storePlist - In the implementation block
@property (nonatomic,retain) NSString * infoPlist;                       //@synthesize infoPlist=_infoPlist - In the implementation block
@property (nonatomic,retain) NSError * error;                            //@synthesize error=_error - In the implementation block
+(id)downloadAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 prettyName:(id)arg3 ;
+(id)uploadAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 sourcePath:(id)arg3 prettyName:(id)arg4 ;
+(id)iCloudRestoreAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 assetType:(id)arg3 restorePath:(id)arg4 displayName:(id)arg5 ;
+(id)assetWithSerializedAsset:(id)arg1 ;
-(void)setError:(id)arg1 ;
-(float)downloadProgress;
-(bool)isRestore;
-(float)installProgress;
-(void)dealloc;
-(id)description;
-(id)path;
-(id)identifier;
-(void)setIcon:(id)arg1 ;
-(void)setPath:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(unsigned)priority;
-(void)setPriority:(unsigned)arg1 ;
-(long long)storePID;
-(bool)isDownload;
-(bool)bypassStore;
-(id)storeInfo;
-(id)storePlist;
-(bool)readyForStore;
-(id)manifestEntry;
-(bool)installOnly;
-(void)setReadyForStore:(bool)arg1 ;
-(id)serializedAsset;
-(void)invokeStoreCompletion;
-(void)invokeStoreInstallCompletion:(bool)arg1 withError:(id)arg2 ;
-(id)variantOptions;
-(void)setVariantOptions:(id)arg1 ;
-(id)prettyName;
-(void)setPrettyName:(id)arg1 ;
-(void)setIsDownload:(bool)arg1 ;
-(void)setIsRestore:(bool)arg1 ;
-(void)setBypassStore:(bool)arg1 ;
-(void)setInstallOnly:(bool)arg1 ;
-(void)setStorePID:(long long)arg1 ;
-(void)setInstallProgress:(float)arg1 ;
-(id)storeCompletion;
-(void)setStoreCompletion:(id)arg1 ;
-(id)storeProgress;
-(void)setStoreProgress:(id)arg1 ;
-(id)storeInstallCompletion;
-(void)setStoreInstallCompletion:(id)arg1 ;
-(void)setStoreInfo:(id)arg1 ;
-(void)setStorePlist:(id)arg1 ;
-(void)setInfoPlist:(id)arg1 ;
-(id)dataclass;
-(void)setDataclass:(id)arg1 ;
-(id)infoPlist;
-(id)error;
-(void)setDownloadProgress:(float)arg1 ;
-(id)assetType;
-(id)icon;
-(void)setAssetType:(id)arg1 ;
@end

