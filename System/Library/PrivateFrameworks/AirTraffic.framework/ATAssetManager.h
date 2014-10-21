/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface ATAssetManager : NSObject {

	NSMutableArray* _assets;
	NSMutableDictionary* _assetsByDataclass;
	NSMutableDictionary* _assetsByStoreID;
	NSMutableArray* _completedStoreAssets;
	unsigned long long _completedAssets;
	unsigned long long _totalAssetCount;
	NSMutableDictionary* _totalAssetCountByDataclass;

}
-(void)dealloc;
-(id)init;
-(bool)isEmpty;
-(void)reset;
-(unsigned long long)totalAssetCountForDataclass:(id)arg1 ;
-(unsigned long long)currentAssetForDataclass:(id)arg1 ;
-(void)enqueueAssets:(id)arg1 ;
-(void)_installSignalHandler;
-(unsigned long long)totalAssetCount;
-(id)assetProgressForAllDataclasses;
-(unsigned long long)awaitingStoreCompletion;
-(void)enqueueAsset:(id)arg1 ;
-(void)mapStoreIDToAsset:(id)arg1 ;
-(id)assetForStoreID:(long long)arg1 ;
-(id)assetForDataclass:(id)arg1 identifier:(id)arg2 ;
-(id)completedStoreAssets;
-(id)storeAssetsForDataclass:(id)arg1 ;
-(id)restoreAssetsForDataclass:(id)arg1 ;
-(id)bypassedRestoresForDataclass:(id)arg1 ;
-(id)assetsForDataclasses:(id)arg1 ;
-(unsigned)countOfSyncAssetsForDataclasses:(id)arg1 ;
-(id)uploadAssetsForDataclass:(id)arg1 ;
-(void)dequeueAsset:(id)arg1 ;
-(id)assetManifestForDataclasses:(id)arg1 ;
-(void)fixUpInstallOnlyAssetsForDataclass:(id)arg1 ;
-(void)removeCompletedStoreAsset:(id)arg1 ;
-(bool)dataclassIsEmpty:(id)arg1 ;
-(id)assets;
-(unsigned long long)currentAsset;
@end

