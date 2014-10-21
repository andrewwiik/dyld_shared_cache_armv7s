/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface VKDispatch : NSObject {

	NSObject<OS_dispatch_queue>* _homeQueue;
	NSObject<OS_dispatch_queue>* _layoutQueue;
	NSObject<OS_dispatch_queue>* _renderQueue;

}

@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * homeQueue;                //@synthesize homeQueue=_homeQueue - In the implementation block
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * layoutQueue;              //@synthesize layoutQueue=_layoutQueue - In the implementation block
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * renderQueue;              //@synthesize renderQueue=_renderQueue - In the implementation block
+(id)defaultDispatch;
-(void)dealloc;
-(id)description;
-(id)renderQueue;
-(id)homeQueue;
-(id)layoutQueue;
-(id)initWithHomeQueue:(id)arg1 ;
-(id)_initWithHomeQueue:(id)arg1 layoutQueue:(id)arg2 renderQueue:(id)arg3 ;
-(id)_newLayoutQueue:(const char*)arg1 ;
-(id)_newRenderQueue:(const char*)arg1 ;
@end
