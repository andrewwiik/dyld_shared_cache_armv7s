/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface IMCallMonitor : NSObject {

	id _callCenter;
	bool _wasOnCall;
	NSDate* _lastCallDate;

}

@property (nonatomic,readonly) bool isOnCall; 
@property (nonatomic,readonly) NSDate * dateLastCallEnded;              //@synthesize lastCallDate=_lastCallDate - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(bool)isOnCall;
-(id)dateLastCallEnded;
@end

