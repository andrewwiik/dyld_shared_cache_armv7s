/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSDate, NSArray;

@interface WorldClockManager : NSObject {

	bool _dirty;
	NSMutableArray* _cities;
	NSDate* lastModified;

}

@property (nonatomic,readonly) NSArray * cities;                 //@synthesize cities=_cities - In the implementation block
@property (nonatomic,retain) NSDate * lastModified; 
+(id)sharedManager;
-(void)setLastModified:(id)arg1 ;
-(void)dealloc;
-(void)saveCities;
-(id)cities;
-(bool)canAddCity;
-(void)loadCities;
-(bool)checkIfCitiesModified;
-(id)cityWithIdUrl:(id)arg1 ;
-(unsigned long long)addCity:(id)arg1 ;
-(void)removeCity:(id)arg1 ;
-(void)removeCityAtIndex:(unsigned long long)arg1 ;
-(void)moveCityFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)removeAllCities;
-(id)lastModified;
@end

