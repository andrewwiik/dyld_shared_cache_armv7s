/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAWeatherWindSpeed : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * windDirection; 
@property (nonatomic,copy) NSNumber * windDirectionDegree; 
+(id)windSpeed;
+(id)windSpeedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)encodedClassName;
-(id)windDirection;
-(void)setWindDirection:(id)arg1 ;
-(id)windDirectionDegree;
-(void)setWindDirectionDegree:(id)arg1 ;
@end

