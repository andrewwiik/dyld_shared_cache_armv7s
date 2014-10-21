/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject, NSDate, NSMutableDictionary;

@interface DADClientAccountTimers : NSObject {

	NSObject<OS_dispatch_source>* _deferredAllFolderContentsSource;
	NSObject<OS_dispatch_source>* _deferredFolderListSource;
	NSObject<OS_dispatch_source>* _deferredFolderContentsSource;
	NSDate* _lastAllFolderContentsRequestDate;
	NSMutableDictionary* _folderIdToLastFolderContentsRequestDate;
	NSDate* _lastFolderListRequestDate;
	NSDate* _lastFolderWipeRequestDate;

}

@property (retain) NSDate * lastAllFolderContentsRequestDate;                                             //@synthesize lastAllFolderContentsRequestDate=_lastAllFolderContentsRequestDate - In the implementation block
@property (retain) NSDate * lastFolderListRequestDate;                                                    //@synthesize lastFolderListRequestDate=_lastFolderListRequestDate - In the implementation block
@property (retain) NSDate * lastFolderWipeRequestDate;                                                    //@synthesize lastFolderWipeRequestDate=_lastFolderWipeRequestDate - In the implementation block
@property (assign,nonatomic) NSObject<OS_dispatch_source> * deferredAllFolderContentsSource;              //@synthesize deferredAllFolderContentsSource=_deferredAllFolderContentsSource - In the implementation block
@property (assign,nonatomic) NSObject<OS_dispatch_source> * deferredFolderListSource;                     //@synthesize deferredFolderListSource=_deferredFolderListSource - In the implementation block
@property (assign,nonatomic) NSObject<OS_dispatch_source> * deferredFolderContentsSource;                 //@synthesize deferredFolderContentsSource=_deferredFolderContentsSource - In the implementation block
-(void)dealloc;
-(void)killAllTimers;
-(long long)clientBehaviorForFolderIds:(id)arg1 ;
-(void)setLastFolderContentRequestDate:(id)arg1 forFolderWithId:(id)arg2 ;
-(double)deferredTimerInterval;
-(void)setDeferredFolderContentsSource:(id)arg1 ;
-(long long)clientBehaviorForFolderContents;
-(void)setLastAllFolderContentsRequestDate:(id)arg1 ;
-(void)setDeferredAllFolderContentsSource:(id)arg1 ;
-(long long)clientBehaviorForFolderList;
-(void)setLastFolderListRequestDate:(id)arg1 ;
-(bool)allowFolderWipe;
-(void)setLastFolderWipeRequestDate:(id)arg1 ;
-(void)setDeferredFolderListSource:(id)arg1 ;
-(id)_folderIdToLastFolderContentsRequestDate;
-(id)lastAllFolderContentsRequestDate;
-(id)lastFolderListRequestDate;
-(id)deferredAllFolderContentsSource;
-(id)deferredFolderListSource;
-(id)deferredFolderContentsSource;
-(id)lastFolderWipeRequestDate;
@end

