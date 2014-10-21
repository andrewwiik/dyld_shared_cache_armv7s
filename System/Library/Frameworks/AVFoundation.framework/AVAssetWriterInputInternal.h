/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVWeakReference, AVAssetWriterInputHelper, NSObject;

@interface AVAssetWriterInputInternal : NSObject {

	AVWeakReference* weakReference;
	AVAssetWriterInputHelper* helper;
	NSObject<OS_dispatch_queue>* helperQueue;
	bool attachedToPixelBufferAdaptor;
	AVWeakReference* weakReferenceToAssetWriter;
	long long numberOfAppendFailures;
	NSObject<OS_dispatch_queue>* appendFailureReadWriteQueue;

}
@end

