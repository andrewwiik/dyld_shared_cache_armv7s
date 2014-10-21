/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:16 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class RCSavedRecordingAssetRemaker, NSURL, NSObject;

@interface RCSavedRecordingAssetRemakerOperation : NSOperation {

	RCSavedRecordingAssetRemaker* _remaker;
	NSURL* _recordingURI;
	NSObject<OS_dispatch_queue>* _recordingsModelQueue;
	double _remakePriority;

}

@property (__weak) RCSavedRecordingAssetRemaker * remaker;                          //@synthesize remaker=_remaker - In the implementation block
@property (copy) NSURL * recordingURI;                                              //@synthesize recordingURI=_recordingURI - In the implementation block
@property (retain) NSObject<OS_dispatch_queue> * recordingsModelQueue;              //@synthesize recordingsModelQueue=_recordingsModelQueue - In the implementation block
@property (assign) double remakePriority;                                           //@synthesize remakePriority=_remakePriority - In the implementation block
-(id)init;
-(void)main;
-(void).cxx_destruct;
-(id)recordingURI;
-(double)remakePriority;
-(void)setRemakePriority:(double)arg1 ;
-(void)setRecordingURI:(id)arg1 ;
-(void)setRecordingsModelQueue:(id)arg1 ;
-(void)setRemaker:(id)arg1 ;
-(id)remaker;
-(id)recordingsModelQueue;
@end

