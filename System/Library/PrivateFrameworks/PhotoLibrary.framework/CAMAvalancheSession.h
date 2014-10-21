/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CAMAvalancheSessionDelegate, OS_dispatch_source, OS_dispatch_queue;
#import <PhotoLibrary/PhotoLibrary-Structs.h>
@class NSString, PLManagedAsset, NSDate, NSObject, CIBurstImageSet;

@interface CAMAvalancheSession : NSObject {

	long long _type;
	<CAMAvalancheSessionDelegate>* _delegate;
	long long _state;
	NSString* _uuid;
	unsigned long long _numberOfPhotos;
	PLManagedAsset* _possibleAvalancheAsset;
	NSDate* __expirationDate;
	NSObject<OS_dispatch_source>* __expirationTimer;
	NSObject<OS_dispatch_queue>* __expirationQueue;
	CIBurstImageSet* __burstImageSet;

}

@property (nonatomic,readonly) long long type;                                                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) <CAMAvalancheSessionDelegate> * delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long state;                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * uuid;                                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfPhotos;                              //@synthesize numberOfPhotos=_numberOfPhotos - In the implementation block
@property (nonatomic,retain) PLManagedAsset * possibleAvalancheAsset;                          //@synthesize possibleAvalancheAsset=_possibleAvalancheAsset - In the implementation block
@property (setter=_setExpirationDate:,nonatomic,retain) NSDate * _expirationDate;              //@synthesize _expirationDate=__expirationDate - In the implementation block
@property (nonatomic,readonly) NSObject<OS_dispatch_source> * _expirationTimer;                //@synthesize _expirationTimer=__expirationTimer - In the implementation block
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * _expirationQueue;                 //@synthesize _expirationQueue=__expirationQueue - In the implementation block
@property (nonatomic,readonly) CIBurstImageSet * _burstImageSet;                               //@synthesize _burstImageSet=__burstImageSet - In the implementation block
-(void)_setUUID:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(long long)state;
-(long long)type;
-(id)initWithType:(long long)arg1 ;
-(void)_setState:(long long)arg1 ;
-(unsigned long long)numberOfPhotos;
-(void)_setupExpirationTimer;
-(void)finalizeWithAnalysis:(bool)arg1 ;
-(void)_teardownExpirationTimer;
-(void)_setExpirationDate:(id)arg1 ;
-(id)allAssetIdentifiers;
-(id)bestAssetIndentifiers;
-(id)stackAssetIdentifier;
-(id)possibleAvalancheAsset;
-(void)_transitionToState:(long long)arg1 ;
-(void)_expirationTimerFired;
-(void)_setPossibleAvalancheAsset:(id)arg1 ;
-(id)_burstImageSet;
-(bool)_ensureValidStateChange:(long long)arg1 ;
-(void)_didTransitionToState:(long long)arg1 ;
-(bool)extend;
-(void)addAssetForAnalysis:(id)arg1 withIOSurface:(IOSurfaceRef)arg2 metadata:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(id)_expirationDate;
-(id)_expirationTimer;
-(id)_expirationQueue;
-(id)uuid;
@end

