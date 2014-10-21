/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class RadioGetTracksResponse, MPAVItem, RadioStation, NSDate, NSArray;

@interface MPRadioStationPreparationContext : NSObject {

	RadioGetTracksResponse* _getTracksResponse;
	MPAVItem* _prefixItem;
	RadioStation* _station;

}

@property (nonatomic,readonly) MPAVItem * prefixItem;                      //@synthesize prefixItem=_prefixItem - In the implementation block
@property (nonatomic,readonly) bool shouldIncrementSkipCount; 
@property (nonatomic,readonly) NSDate * skipDate; 
@property (nonatomic,readonly) RadioStation * station;                     //@synthesize station=_station - In the implementation block
@property (nonatomic,readonly) NSArray * tracks; 
-(id)station;
-(bool)shouldIncrementSkipCount;
-(id)skipDate;
-(id)initWithGetTracksResponse:(id)arg1 station:(id)arg2 prefixItem:(id)arg3 ;
-(id)prefixItem;
-(void).cxx_destruct;
-(id)tracks;
@end

