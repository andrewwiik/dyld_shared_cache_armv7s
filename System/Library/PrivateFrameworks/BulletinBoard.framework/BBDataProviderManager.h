/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BBRemoteDataProviderDelegate.h>
#import <BulletinBoard/BBRemoteDataProviderConnectionDelegate.h>

@protocol BBDataProviderManagerDelegate, OS_xpc_object, OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject;

@interface BBDataProviderManager : NSObject <BBRemoteDataProviderDelegate, BBRemoteDataProviderConnectionDelegate> {

	<BBDataProviderManagerDelegate>* _delegate;
	NSMutableDictionary* _dataProvidersBySectionID;
	NSMutableDictionary* _localDataProviders;
	NSMutableDictionary* _remoteDataProviders;
	NSMutableArray* _dataProviderConnections;
	NSMutableDictionary* _onlineDataProvidersByService;
	NSMutableDictionary* _offlineDataProvidersByService;
	NSMutableDictionary* _dataProviderFactoriesByClass;
	NSObject<OS_xpc_object>* _connection;
	NSObject<OS_dispatch_queue>* _queue;
	bool _allowConnections;

}

@property (assign,nonatomic) <BBDataProviderManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)dataProviderForSectionID:(id)arg1 ;
-(void)noteSettingsChanged:(id)arg1 forSectionID:(id)arg2 ;
-(void)loadAllDataProviders;
-(id)dataProviders;
-(void)reloadIdentityForSectionID:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(id)rebuildSectionInfo:(id)arg1 forSectionID:(id)arg2 ;
-(void)factory:(id)arg1 addDataProvider:(id)arg2 ;
-(void)factory:(id)arg1 removeDataProvider:(id)arg2 ;
-(void)dataProviderOperational:(id)arg1 ;
-(void)dataProviderConnection:(id)arg1 addDataProviderWithSectionID:(id)arg2 ;
-(void)dataProviderConnection:(id)arg1 removeDataProviderWithSectionID:(id)arg2 ;
-(void)dataProviderConnection:(id)arg1 connectionStateDidChange:(bool)arg2 ;
-(id)_configureSectionInfo:(id)arg1 forDataProvider:(id)arg2 ;
-(void)_loadAllDataProviderPluginBundles;
-(id)getSectionInfoForSectionID:(id)arg1 ;
-(void)_addDataProviderPlugin:(id)arg1 forFactory:(id)arg2 factoryInfo:(id)arg3 ;
-(void)_removeDataProvider:(id)arg1 ;
-(void)_loadDataProviderPluginBundle:(id)arg1 ;
-(void)_addDataProviderClass:(Class)arg1 ;
-(id)_defaultSectionInfoForSection:(id)arg1 ;
-(void)_updateSectionInfo:(id)arg1 withDefaultInfo:(id)arg2 ;
-(void)_removeDataProviderSectionID:(id)arg1 ;
-(void)_addDataProvider:(id)arg1 forFactory:(id)arg2 factoryInfo:(id)arg3 ;
-(id)_configureDataProvider:(id)arg1 ;
@end

