/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:28 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSURL, NSNumber, NSString;

@interface SAAlarmUpdate : SADomainCommand

@property (nonatomic,copy) NSArray * addedFrequency; 
@property (nonatomic,copy) NSURL * alarmId; 
@property (nonatomic,copy) NSNumber * enabled; 
@property (nonatomic,copy) NSNumber * hour; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * minute; 
@property (nonatomic,copy) NSArray * removedFrequency; 
+(id)update;
+(id)updateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setEnabled:(id)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(void)setHour:(id)arg1 ;
-(id)hour;
-(id)minute;
-(id)enabled;
-(void)setMinute:(id)arg1 ;
-(id)encodedClassName;
-(bool)requiresResponse;
-(id)alarmId;
-(void)setAlarmId:(id)arg1 ;
-(id)addedFrequency;
-(void)setAddedFrequency:(id)arg1 ;
-(id)removedFrequency;
-(void)setRemovedFrequency:(id)arg1 ;
@end

