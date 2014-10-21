/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:24 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, RadioFairPlaySAPContext;

@interface RadioFairPlayController : NSObject {

	NSObject<OS_dispatch_queue>* _accessQueue;
	unsigned long long _activeAccountIdentifier;
	NSMutableArray* _dpInfoKeyBagSyncDataBlobs;
	NSObject<OS_dispatch_queue>* _notificationQueue;
	RadioFairPlaySAPContext* _SAPContext;
	NSMutableArray* _SAPContextLoadBlocks;

}
+(void)warmSAPSession;
+(id)_sharedController;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void).cxx_destruct;
-(void)_verifyWithURL:(id)arg1 data:(id)arg2 headerFields:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(id)_popDPInfoKeyBagSyncDataWithCount:(long long)arg1 returningAccountIdentifier:(unsigned long long*)arg2 error:(id*)arg3 ;
-(void)_pushDPInfoKeyBagSyncData:(id)arg1 forAccountIdentifier:(unsigned long long)arg2 ;
-(void)_loadSAPContextWithBag:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)_removeCachedSAPContext;
-(id)_setupMescalSessionWithBag:(id)arg1 canUseCachedCertificateData:(bool)arg2 error:(id*)arg3 ;
-(id)_loadCertificateDataWithCertificateURL:(id)arg1 error:(id*)arg2 ;
-(id)_performSetupWithURL:(id)arg1 inputData:(id)arg2 error:(id*)arg3 ;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
@end

