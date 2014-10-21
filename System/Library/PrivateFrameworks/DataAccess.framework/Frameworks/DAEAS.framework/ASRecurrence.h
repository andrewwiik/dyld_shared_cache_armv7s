/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <CoreFoundation/NSCoding.h>

@class NSNumber, NSDate, ASEvent;

@interface ASRecurrence : ASItem <NSCoding> {

	NSNumber* _type;
	NSNumber* _interval;
	NSNumber* _dayOfWeek;
	NSNumber* _dayOfMonth;
	NSNumber* _weekOfMonth;
	NSNumber* _monthOfYear;
	NSDate* _until;
	NSNumber* _occurrences;
	NSNumber* _firstDayOfWeek;
	NSNumber* _calendarType;
	ASEvent* _parentEvent;

}

@property (retain) NSNumber * type;                        //@synthesize type=_type - In the implementation block
@property (retain) NSNumber * interval;                    //@synthesize interval=_interval - In the implementation block
@property (retain) NSNumber * dayOfWeek;                   //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
@property (retain) NSNumber * dayOfMonth;                  //@synthesize dayOfMonth=_dayOfMonth - In the implementation block
@property (retain) NSNumber * weekOfMonth;                 //@synthesize weekOfMonth=_weekOfMonth - In the implementation block
@property (retain) NSNumber * monthOfYear;                 //@synthesize monthOfYear=_monthOfYear - In the implementation block
@property (retain) NSDate * until;                         //@synthesize until=_until - In the implementation block
@property (retain) NSNumber * occurrences;                 //@synthesize occurrences=_occurrences - In the implementation block
@property (retain) NSNumber * firstDayOfWeek;              //@synthesize firstDayOfWeek=_firstDayOfWeek - In the implementation block
@property (retain) NSNumber * calendarType;                //@synthesize calendarType=_calendarType - In the implementation block
+(bool)acceptsTopLevelLeaves;
+(bool)parsingLeafNode;
+(bool)parsingWithSubItems;
+(bool)frontingBasicTypes;
+(bool)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)setUntil:(id)arg1 ;
-(id)until;
-(id)monthOfYear;
-(id)dayOfMonth;
-(id)dayOfWeek;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(id)arg1 ;
-(id)type;
-(id)weekOfMonth;
-(void)setWeekOfMonth:(id)arg1 ;
-(void)setInterval:(id)arg1 ;
-(id)interval;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(bool)_loadAttributesFromCalRecurrence:(void*)arg1 parentStartDate:(id)arg2 parentItem:(id)arg3 ;
-(void*)_newRecurrenceWithParentStartDate:(id)arg1 ;
-(void)setDayOfWeek:(id)arg1 ;
-(void)setDayOfMonth:(id)arg1 ;
-(void)setMonthOfYear:(id)arg1 ;
-(void)setUntilString:(id)arg1 ;
-(void)setOccurrences:(id)arg1 ;
-(void)setCalendarType:(id)arg1 ;
-(void)setFirstDayOfWeek:(id)arg1 ;
-(id)occurrences;
-(id)calendarType;
-(id)firstDayOfWeek;
-(bool)_requiresParentEvent;
-(id)_untilDateForCalFrameworkWithParentStartDate:(id)arg1 ;
-(id)_transformedUntilDateForActiveSync:(id)arg1 ;
-(void)saveToCalendarWithParentASEvent:(id)arg1 existingRecord:(void*)arg2 shouldMergeProperties:(bool)arg3 outMergeDidChooseLocalProperties:(bool*)arg4 ;
-(id)initWithCalRecurrence:(void*)arg1 parentEvent:(id)arg2 ;
-(void)setParentEvent:(id)arg1 ;
@end

