/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Internet Plug-Ins/QuickTime Plugin.webplugin/QuickTime Plugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface FPVTaskQueue : NSObject {

	NSMutableArray* _requiredTaskQueue;
	NSMutableArray* _desiredTaskQueue;
	int _numTotalRunning;
	int _numDesiredRunning;
	int _maxTotalTasks;
	int _maxDesiredTasks;
	int _restrictedModeCount;
	int _limitedModeCount;

}
+(id)sharedTaskQueue;
-(void)dealloc;
-(id)init;
-(void)beginRestrictedMode;
-(void)endLimitedMode;
-(void)beginLimitedMode;
-(void)endRestrictedMode;
-(void)addRequiredTask:(id)arg1 ;
-(void)addDesiredTask:(id)arg1 ;
-(void)_updateLimits;
-(void)_addTask:(id)arg1 toQueue:(id)arg2 ;
-(void)_kickOffTasks;
-(void)_taskNotification:(id)arg1 ;
-(void)_kickOffTasksReal;
-(void)_printQueue;
-(void)removeTask:(id)arg1 ;
@end
