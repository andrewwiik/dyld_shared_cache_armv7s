/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface IMPeople : NSObject {

	NSMutableArray* _people;
	int _coalesceCount;
	bool _hidePeople;

}

@property (nonatomic,readonly) NSArray * groups; 
@property (nonatomic,readonly) NSArray * people; 
@property (assign,setter=setShouldHidePeople:,nonatomic) bool hidePeople;              //@synthesize hidePeople=_hidePeople - In the implementation block
@property (nonatomic,readonly) bool coalescingChanges; 
@property (nonatomic,readonly) unsigned long long count; 
-(id)groups;
-(id)people;
-(void)dealloc;
-(unsigned long long)count;
-(void)setShouldHidePeople:(bool)arg1 ;
-(void)beginCoalescedChanges;
-(void)imHandle:(id)arg1 buddyStatusChanged:(bool)arg2 ;
-(void)endCoalescedChanges;
-(bool)removeIMHandle:(id)arg1 ;
-(bool)addIMHandle:(id)arg1 ;
-(bool)hidePeople;
-(bool)coalescingChanges;
-(void)addedIMHandle:(id)arg1 ;
-(void)removedIMHandle:(id)arg1 ;
-(void)_addedPeople:(id)arg1 ;
-(bool)addPeopleFromArray:(id)arg1 skipMe:(bool)arg2 ;
-(void)removeNotificationObserver:(id)arg1 ;
-(void)addNotificationObserver:(id)arg1 selector:(SEL)arg2 ;
-(bool)containsIMHandle:(id)arg1 ;
-(bool)removePeopleFromArray:(id)arg1 ;
-(bool)addPeopleFromArray:(id)arg1 ;
@end
