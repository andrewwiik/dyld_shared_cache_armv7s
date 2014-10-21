/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSTimer, NSDate;

@interface IMBatchIDStatusQueryController : NSObject {

	NSMutableArray* _imHandles;
	NSMutableArray* _imHandlesQueried;
	NSTimer* _nextQueryTimer;
	NSDate* _timeOfDeath;
	int _numberOfQueriesDone;
	bool _isDead;

}
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)_invalidateNextQueryTimer;
-(void)_nextQuery:(id)arg1 ;
-(void)_scheduleNextQuery:(double)arg1 ;
-(void)setIMHandles:(id)arg1 ;
@end

