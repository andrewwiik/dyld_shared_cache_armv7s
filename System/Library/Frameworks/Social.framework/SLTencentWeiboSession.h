/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/SLTencentWeiboClientSessionProtocol.h>
#import <Social/SLMicroBlogSheetDelegate.h>

@protocol SLTencentWeiboRemoteSessionProtocol, OS_dispatch_queue, OS_dispatch_semaphore;
@class SLRemoteSessionProxy, NSCache, NSObject;

@interface SLTencentWeiboSession : NSObject <SLTencentWeiboClientSessionProtocol, SLMicroBlogSheetDelegate> {

	SLRemoteSessionProxy<SLTencentWeiboRemoteSessionProtocol>* _remoteSession;
	NSCache* _profileImageCache;
	NSObject<OS_dispatch_queue>* _remoteSessionQueue;
	NSObject<OS_dispatch_semaphore>* _remoteSessionQueueSemaphore;
	/*^block*/ id _connectionResetBlock;
	/*^block*/ id _locationInformationChangedBlock;

}

@property (nonatomic,copy) id connectionResetBlock;                         //@synthesize connectionResetBlock=_connectionResetBlock - In the implementation block
@property (nonatomic,copy) id locationInformationChangedBlock;              //@synthesize locationInformationChangedBlock=_locationInformationChangedBlock - In the implementation block
+(id)_remoteInterface;
-(void)deferExpensiveOperations;
-(void)setConnectionResetBlock:(/*^block*/ id)arg1 ;
-(void)setGeotagStatus:(int)arg1 ;
-(void)setLocationInformationChangedBlock:(/*^block*/ id)arg1 ;
-(void)tearDownConnectionToRemoteSession;
-(void)acceptLocationUpdate:(id)arg1 ;
-(id)_createOrGetRemoteSession;
-(void)setActiveAccountIdentifier:(id)arg1 ;
-(void)fetchSessionInfo:(/*^block*/ id)arg1 ;
-(void)ensureUserRecordStore;
-(void)fetchRecordForScreenName:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)fetchProfileImageDataForScreenName:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)recordsMatchingPrefixString:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)fetchCurrentUrlLimits:(/*^block*/ id)arg1 ;
-(void)fetchCurrentImageLimits:(/*^block*/ id)arg1 ;
-(void)fetchRelationshipWithScreenName:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)setOverrideGeotagInfo:(id)arg1 ;
-(void)fetchGeotagStatus:(/*^block*/ id)arg1 ;
-(void)sendStatus:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)getPermaLinkFromLastStatusUpdate:(/*^block*/ id)arg1 ;
-(void)overrideLocationWithLatitude:(float)arg1 longitude:(float)arg2 name:(id)arg3 ;
-(void)showSettingsIfNeeded;
-(id)serviceAccountTypeIdentifier;
-(void)stopDeferringExpensiveOperations;
-(long long)characterCountForText:(id)arg1 shortenedURLCost:(long long)arg2 ;
-(/*^block*/ id)locationInformationChangedBlock;
-(void)setClientInfo:(id)arg1 ;
-(void)setGeotagAccountSetting:(bool)arg1 ;
-(/*^block*/ id)connectionResetBlock;
-(void)revokeAllAccessTokensForDeviceWithCompletion:(/*^block*/ id)arg1 ;
-(void)revokeAllAccessTokensForDevice;
-(void)revokeAccessTokenForAppWithOauthToken:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)init;
-(void).cxx_destruct;
@end

