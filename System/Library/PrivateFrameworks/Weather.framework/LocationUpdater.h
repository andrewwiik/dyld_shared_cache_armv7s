/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/WeatherUpdater.h>

@class CLGeocoder, City;

@interface LocationUpdater : WeatherUpdater {

	bool _isGeoCoding;
	CLGeocoder* _geoCoder;
	/*^block*/ id _localWeatherHandler;
	City* _currentCity;

}

@property (nonatomic,retain) City * currentCity;              //@synthesize currentCity=_currentCity - In the implementation block
+(id)sharedLocationUpdater;
+(void)clearSharedLocationUpdater;
-(void)dealloc;
-(void)cancel;
-(id)aggregateDictionaryDomain;
-(void)didProcessDocument;
-(void)handleCompletionForCity:(id)arg1 withUpdateDetail:(unsigned long long)arg2 ;
-(void)failCity:(id)arg1 ;
-(void)_failed:(unsigned long long)arg1 ;
-(void)handleNilCity;
-(bool)isDataValid:(id)arg1 ;
-(void)parsedResultCity:(id)arg1 ;
-(void)updateWeatherForLocation:(id)arg1 city:(id)arg2 withCompletionHandler:(/*^block*/ id)arg3 ;
-(void)updateWeatherForLocation:(id)arg1 city:(id)arg2 ;
-(void)enableProgressIndicator:(bool)arg1 ;
-(void)setCurrentCity:(id)arg1 ;
-(id)currentCity;
@end

