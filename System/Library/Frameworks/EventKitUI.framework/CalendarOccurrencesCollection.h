/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSArray;

@interface CalendarOccurrencesCollection : NSObject <NSCopying> {

	NSArray* _occurrences;
	NSArray* _allDayOccurrences;
	NSArray* _timedOccurrences;

}

@property (nonatomic,readonly) NSArray * occurrences;                    //@synthesize occurrences=_occurrences - In the implementation block
@property (nonatomic,readonly) NSArray * allDayOccurrences;              //@synthesize allDayOccurrences=_allDayOccurrences - In the implementation block
@property (nonatomic,readonly) NSArray * timedOccurrences;               //@synthesize timedOccurrences=_timedOccurrences - In the implementation block
-(id)allDayOccurrences;
-(id)timedOccurrences;
-(id)initWithOccurrences:(id)arg1 timedOccurrences:(id)arg2 allDayOccurrences:(id)arg3 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void).cxx_destruct;
-(id)occurrences;
@end

