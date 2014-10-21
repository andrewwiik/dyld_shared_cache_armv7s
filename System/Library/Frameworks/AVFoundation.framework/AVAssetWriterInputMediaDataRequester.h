/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AVAssetWriterInputMediaDataRequesterDelegate;
@class NSObject;

@interface AVAssetWriterInputMediaDataRequester : NSObject {

	NSObject<OS_dispatch_queue>* _requestQueue;
	/*^block*/ id _requestBlock;
	<AVAssetWriterInputMediaDataRequesterDelegate>* _delegate;

}

@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * requestQueue;                 //@synthesize requestQueue=_requestQueue - In the implementation block
@property (assign) <AVAssetWriterInputMediaDataRequesterDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithRequestQueue:(id)arg1 requestBlock:(/*^block*/ id)arg2 ;
-(id)requestQueue;
-(void)requestMediaDataIfNecessary;
-(void)_collectUncollectables_invokedFromDeallocAndFinalize;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)finalize;
@end

