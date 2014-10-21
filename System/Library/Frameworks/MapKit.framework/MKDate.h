/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSDate.h>

@class NSDate, NSTimeZone;

@interface MKDate : NSDate {

	NSDate* _date;
	NSTimeZone* _tz;

}

@property (nonatomic,retain) NSTimeZone * timeZone;              //@synthesize tz=_tz - In the implementation block
@property (nonatomic,readonly) NSDate * nsDate;                  //@synthesize date=_date - In the implementation block
+(id)dateWithNSDate:(id)arg1 ;
-(long long)dayOfCommonEra;
-(id)initWithNSDate:(id)arg1 ;
-(id)nsDate;
-(id)description;
-(double)timeIntervalSinceReferenceDate;
-(void)setTimeZone:(id)arg1 ;
-(id)timeZone;
-(void).cxx_destruct;
-(id)initWithTimeIntervalSinceReferenceDate:(double)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
@end

