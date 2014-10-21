/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSMutableDictionary, NSObject;

@interface CMActivityAlarmProxy : NSObject {

	id _internal;
	CLConnectionClient* fLocationdConnection;
	int fAlarmCounter;
	NSMutableDictionary* fAlarms;
	NSObject<OS_dispatch_queue>* fReplyQueue;
	bool fAlarmAvailable;

}
+(id)sharedInstance;
-(bool)activityAlarmAvailable;
-(void)listenForActivityAlarm:(id)arg1 ;
-(void)stopListeningForActivityAlarm:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

