/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:29 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSString, NSURL;

@interface SAClockSearch : SADomainCommand

@property (nonatomic,copy) NSNumber * alCityId; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSURL * identifier; 
@property (nonatomic,copy) NSString * unlocalizedCityName; 
@property (nonatomic,copy) NSString * unlocalizedCountryName; 
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)search;
-(id)groupIdentifier;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void)setCountryCode:(id)arg1 ;
-(id)countryCode;
-(id)encodedClassName;
-(bool)requiresResponse;
-(id)alCityId;
-(void)setAlCityId:(id)arg1 ;
-(id)unlocalizedCityName;
-(void)setUnlocalizedCityName:(id)arg1 ;
-(id)unlocalizedCountryName;
-(void)setUnlocalizedCountryName:(id)arg1 ;
@end

