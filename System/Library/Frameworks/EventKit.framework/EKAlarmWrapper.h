/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <EventKit/EventKit-Structs.h>
@interface EKAlarmWrapper : NSObject {

	CalAlarmOccurrenceRef _alarm;

}
+(id)wrapperWithAlarmOccurrence:(CalAlarmOccurrenceRef)arg1 ;
-(id)initWithAlarmOccurrence:(CalAlarmOccurrenceRef)arg1 ;
-(id)occurrence;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)fireDate;
@end

