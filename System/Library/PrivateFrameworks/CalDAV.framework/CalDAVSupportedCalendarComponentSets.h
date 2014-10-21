/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVSupportedCalendarComponentSets : CoreDAVItem {

	NSMutableSet* _componentSets;

}
+(bool)allowedCalendars:(id)arg1 contains:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)addCompSet:(id)arg1 ;
-(id)copyParseRules;
-(id)childrenToWrite;
-(id)componentsAsString;
@end

