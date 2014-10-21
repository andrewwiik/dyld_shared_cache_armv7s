/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/WeatherUpdater.h>

@class NSArray, NSMutableArray;

@interface WeatherIdentifierUpdater : WeatherUpdater {

	/*^block*/ id _woeidWeatherHandler;
	NSArray* _requestedCities;
	NSMutableArray* _parsedCities;

}

@property (nonatomic,retain) NSArray * requestedCities;                  //@synthesize requestedCities=_requestedCities - In the implementation block
@property (nonatomic,retain) NSMutableArray * parsedCities;              //@synthesize parsedCities=_parsedCities - In the implementation block
+(id)sharedWeatherIdentifierUpdater;
+(void)clearSharedIdentifierUpdater;
-(void)dealloc;
-(void)updateWeatherForCity:(id)arg1 ;
-(id)aggregateDictionaryDomain;
-(void)handleCompletionForCity:(id)arg1 withUpdateDetail:(unsigned long long)arg2 ;
-(void)_failed:(unsigned long long)arg1 ;
-(void)updateWeatherForCities:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(id)requestedCities;
-(void)setRequestedCities:(id)arg1 ;
-(id)parsedCities;
-(void)setParsedCities:(id)arg1 ;
@end

