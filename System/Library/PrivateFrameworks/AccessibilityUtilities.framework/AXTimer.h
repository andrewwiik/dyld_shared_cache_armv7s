/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilityUtilities/AXTimer.h>

@protocol AXTimer <NSObject>
@property (getter=isActive,nonatomic,readonly) bool active; 
@property (getter=isPending,nonatomic,readonly) bool pending; 
@required
-(bool)isActive;
-(void)cancel;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/ id)arg2;
-(bool)isPending;
@end


@protocol OS_dispatch_source;
@class NSString, AXAccessQueue, NSObject;

@interface AXTimer : NSObject <AXTimer> {

	bool _automaticallyCancelPendingBlockUponSchedulingNewBlock;
	bool _active;
	bool _accessQueueIsExternal;
	int _state;
	NSString* _label;
	AXAccessQueue* _accessQueue;
	NSObject<OS_dispatch_source>* _dispatchTimer;

}

@property (copy) NSString * label;                                                                    //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) bool automaticallyCancelPendingBlockUponSchedulingNewBlock;              //@synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock - In the implementation block
@property (assign,getter=isActive,nonatomic) bool active;                                             //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) int state;                                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) AXAccessQueue * accessQueue;                                             //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic) bool accessQueueIsExternal;                                              //@synthesize accessQueueIsExternal=_accessQueueIsExternal - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_source> * dispatchTimer;                            //@synthesize dispatchTimer=_dispatchTimer - In the implementation block
@property (getter=isPending,nonatomic,readonly) bool pending; 
+(void)initialize;
+(id)timerTargettingMainAccessQueue;
-(void)dealloc;
-(id)init;
-(id)description;
-(int)state;
-(bool)isActive;
-(void)setState:(int)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(void)cancel;
-(void)setActive:(bool)arg1 ;
-(id)initWithTargetAccessQueue:(id)arg1 ;
-(void)setAccessQueue:(id)arg1 ;
-(void)setAccessQueueIsExternal:(bool)arg1 ;
-(id)accessQueue;
-(void)_reallyCancel;
-(void)afterDelay:(double)arg1 processWritingBlock:(/*^block*/ id)arg2 ;
-(void)_afterDelay:(double)arg1 processBlock:(/*^block*/ id)arg2 shouldTreatAsWritingBlock:(bool)arg3 ;
-(bool)automaticallyCancelPendingBlockUponSchedulingNewBlock;
-(bool)accessQueueIsExternal;
-(void)_didFinishProcessingBlock;
-(void)setDispatchTimer:(id)arg1 ;
-(void)_warnAboutAsynchronousScheduling;
-(void)_performEnqueuedWritingBlock:(/*^block*/ id)arg1 asynchronousExecutionWarningHandler:(SEL)arg2 ;
-(void)_warnAboutAsynchronousCancelling;
-(id)dispatchTimer;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/ id)arg2 ;
-(void)afterDelay:(double)arg1 processReadingBlock:(/*^block*/ id)arg2 ;
-(void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(bool)arg1 ;
-(bool)isPending;
@end

