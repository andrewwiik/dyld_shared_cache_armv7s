/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface SSDistributedNotificationCenterObserver : NSObject {

	/*^block*/ id _block;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSString* _name;

}

@property (nonatomic,readonly) id block;                                                 //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSString * name;                                          //@synthesize name=_name - In the implementation block
-(id)dispatchQueue;
-(void)dealloc;
-(id)name;
-(/*^block*/ id)block;
-(id)initWithName:(id)arg1 queue:(id)arg2 block:(/*^block*/ id)arg3 ;
@end

