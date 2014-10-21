/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:32 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WebScriptObject, NSLock, SUScriptObject;

@interface SUScriptFunction : NSObject {

	WebScriptObject* _function;
	NSLock* _lock;
	SUScriptObject* _thisObject;

}

@property (retain) WebScriptObject * scriptObject; 
@property (__weak) id thisObject; 
-(void)dealloc;
-(id)init;
-(void)lock;
-(void)unlock;
-(id)initWithScriptObject:(id)arg1 ;
-(void)setThisObject:(id)arg1 ;
-(bool)callWithArguments:(id)arg1 ;
-(id)scriptObject;
-(void)setScriptObject:(id)arg1 ;
-(id)callSynchronouslyWithArguments:(id)arg1 ;
-(bool)callWithArguments:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(id)_copyAdjustedArgumentsForArguments:(id)arg1 ;
-(id)thisObject;
@end

