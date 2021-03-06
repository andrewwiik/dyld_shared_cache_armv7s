/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSString, SAPerson, SALocation;

@interface SAFmfGeoFenceSet : SADomainCommand

@property (nonatomic,copy) NSNumber * enable; 
@property (nonatomic,copy) NSString * fenceType; 
@property (nonatomic,retain) SAPerson * friend; 
@property (nonatomic,copy) NSString * geoFenceTrigger; 
@property (nonatomic,copy) NSNumber * oneTimeOnly; 
@property (nonatomic,retain) SALocation * requestedLocation; 
+(id)geoFenceSet;
+(id)geoFenceSetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)enable;
-(id)encodedClassName;
-(bool)requiresResponse;
-(void)setEnable:(id)arg1 ;
-(id)friend;
-(void)setFriend:(id)arg1 ;
-(id)requestedLocation;
-(void)setRequestedLocation:(id)arg1 ;
-(id)geoFenceTrigger;
-(void)setGeoFenceTrigger:(id)arg1 ;
-(id)fenceType;
-(void)setFenceType:(id)arg1 ;
-(id)oneTimeOnly;
-(void)setOneTimeOnly:(id)arg1 ;
@end

