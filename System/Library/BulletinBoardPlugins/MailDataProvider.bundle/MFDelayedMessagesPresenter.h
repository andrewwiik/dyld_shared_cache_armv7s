/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/BulletinBoardPlugins/MailDataProvider.bundle/MailDataProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray;

@interface MFDelayedMessagesPresenter : NSObject {

	NSObject<OS_dispatch_queue>* _fireQueue;
	NSObject<OS_dispatch_source>* _fireSource;
	NSMutableArray* _pendingMessages;
	double _postingDelay;

}

@property (assign,nonatomic) double postingDelay;              //@synthesize postingDelay=_postingDelay - In the implementation block
-(void)clearPendingMessages;
-(void)postMessage:(id)arg1 identifier:(id)arg2 immediately:(bool)arg3 fireBlock:(/*^block*/ id)arg4 ;
-(void)removePendingMessagesWithIdentifiers:(id)arg1 ;
-(void)_nts_scheduleNextFireEvent;
-(double)postingDelay;
-(void)setPostingDelay:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTargetQueue:(id)arg1 ;
@end

