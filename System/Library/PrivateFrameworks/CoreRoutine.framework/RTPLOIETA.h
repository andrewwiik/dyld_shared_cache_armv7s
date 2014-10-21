/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class RTPredictedLocationOfInterest, GEOPlaceResult, RTLOIDisplayInfo;

@interface RTPLOIETA : NSObject {

	RTPredictedLocationOfInterest* _ploi;
	GEOPlaceResult* _origin;
	unsigned _liveETASeconds;
	unsigned _historicalETASeconds;
	RTLOIDisplayInfo* _displayInfo;

}

@property (nonatomic,readonly) RTPredictedLocationOfInterest * ploi;              //@synthesize ploi=_ploi - In the implementation block
-(id)description;
-(id)localizedDescription;
-(void).cxx_destruct;
-(id)_preferredName;
-(id)_displayInfoForDate:(id)arg1 ;
-(id)displayInfo;
-(id)initWithPLOI:(id)arg1 origin:(id)arg2 liveETASeconds:(unsigned)arg3 historicalETASeconds:(unsigned)arg4 ;
-(id)_urlName;
-(bool)etaExceedsMinimumETA:(unsigned)arg1 ;
-(bool)hasEquivalentDisplayTo:(id)arg1 ;
-(id)ploi;
-(id)mapsURL;
@end

