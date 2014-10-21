/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPReportingController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, RTCReporting;

@interface MPRTCReportingController : MPReportingController {

	NSObject<OS_dispatch_queue>* _accessQueue;
	bool _recordingEnabled;
	unsigned _reportingFlag;
	NSMutableArray* _reportingFlagLoadCompletionHandlers;
	RTCReporting* _rtcReporting;
	bool _shouldDeferEventFlushing;

}

@property (assign,nonatomic) bool shouldDeferEventFlushing; 
-(void)flushImmediately;
-(void)_recordReportingEvents:(id)arg1 ;
-(bool)_getMethod:(unsigned short*)arg1 respCode:(unsigned short*)arg2 infoDictionary:(id*)arg3 fromReportingEvent:(id)arg4 ;
-(void)setShouldDeferEventFlushing:(bool)arg1 ;
-(bool)shouldDeferEventFlushing;
-(void)loadRTCReportingFlagWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)init;
-(void).cxx_destruct;
@end
