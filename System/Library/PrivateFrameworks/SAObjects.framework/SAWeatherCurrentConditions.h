/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:30 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAWeatherBarometricPressure, SAWeatherCondition, NSNumber, NSString, SAWeatherWindSpeed;

@interface SAWeatherCurrentConditions : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAWeatherBarometricPressure * barometricPressure; 
@property (nonatomic,retain) SAWeatherCondition * condition; 
@property (nonatomic,retain) NSNumber * dayOfWeek; 
@property (nonatomic,copy) NSString * dewPoint; 
@property (nonatomic,copy) NSString * feelsLike; 
@property (nonatomic,copy) NSString * heatIndex; 
@property (nonatomic,copy) NSString * moonPhase; 
@property (nonatomic,copy) NSString * percentHumidity; 
@property (nonatomic,retain) NSNumber * percentOfMoonFaceVisible; 
@property (nonatomic,copy) NSString * sunrise; 
@property (nonatomic,copy) NSString * sunset; 
@property (nonatomic,copy) NSString * temperature; 
@property (nonatomic,copy) NSString * timeOfObservation; 
@property (nonatomic,copy) NSString * timeZone; 
@property (nonatomic,copy) NSString * visibility; 
@property (nonatomic,copy) NSString * windChill; 
@property (nonatomic,retain) SAWeatherWindSpeed * windSpeed; 
+(id)currentConditions;
+(id)currentConditionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)dayOfWeek;
-(id)groupIdentifier;
-(void)setTimeZone:(id)arg1 ;
-(id)timeZone;
-(id)condition;
-(void)setCondition:(id)arg1 ;
-(void)setDayOfWeek:(id)arg1 ;
-(id)encodedClassName;
-(id)barometricPressure;
-(void)setBarometricPressure:(id)arg1 ;
-(id)dewPoint;
-(void)setDewPoint:(id)arg1 ;
-(id)feelsLike;
-(void)setFeelsLike:(id)arg1 ;
-(id)heatIndex;
-(void)setHeatIndex:(id)arg1 ;
-(id)moonPhase;
-(void)setMoonPhase:(id)arg1 ;
-(id)percentHumidity;
-(void)setPercentHumidity:(id)arg1 ;
-(id)percentOfMoonFaceVisible;
-(void)setPercentOfMoonFaceVisible:(id)arg1 ;
-(id)sunrise;
-(void)setSunrise:(id)arg1 ;
-(id)sunset;
-(void)setSunset:(id)arg1 ;
-(id)temperature;
-(void)setTemperature:(id)arg1 ;
-(id)timeOfObservation;
-(void)setTimeOfObservation:(id)arg1 ;
-(id)windChill;
-(void)setWindChill:(id)arg1 ;
-(id)windSpeed;
-(void)setWindSpeed:(id)arg1 ;
-(id)visibility;
-(void)setVisibility:(id)arg1 ;
@end

