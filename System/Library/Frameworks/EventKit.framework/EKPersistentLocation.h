/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSNumber;

@interface EKPersistentLocation : EKPersistentObject <NSCopying>

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * address; 
@property (nonatomic,copy) NSNumber * latitude; 
@property (nonatomic,copy) NSNumber * longitude; 
@property (nonatomic,copy) NSNumber * radius; 
@property (nonatomic,copy) NSString * addressBookEntityID; 
+(id)defaultPropertiesToLoad;
+(id)relations;
-(void)setAddress:(id)arg1 ;
-(void)setLatitude:(id)arg1 ;
-(void)setLongitude:(id)arg1 ;
-(id)addressBookEntityID;
-(void)setAddressBookEntityID:(id)arg1 ;
-(void)setCalendarItemOwner:(id)arg1 ;
-(id)calendarItemOwner;
-(void)setAlarmOwner:(id)arg1 ;
-(id)alarmOwner;
-(int)entityType;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)title;
-(id)latitude;
-(id)longitude;
-(void)setRadius:(id)arg1 ;
-(id)radius;
-(id)address;
@end

