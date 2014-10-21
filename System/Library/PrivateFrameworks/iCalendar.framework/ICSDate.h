/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:28 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSDate : ICSProperty

@property (retain) NSString * tzid; 
-(id)initWithValue:(id)arg1 ;
-(bool)hasFloatingTimeZone;
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 ;
-(id)tzid;
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 ;
-(bool)hasTimeComponent;
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 timeZone:(id)arg7 ;
-(id)description;
-(id)components;
-(id)parametersToIncludeForChecksumVersion:(int)arg1 ;
-(void)setTzid:(id)arg1 ;
@end

