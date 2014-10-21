/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:46 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPReportingEvent.h>

@class NSDate, MPReportingRadioStationMetadata, MPReportingTrackMetadata;

@interface MPReportingTrackPlaybackEvent : MPReportingEvent {

	NSDate* _date;
	MPReportingRadioStationMetadata* _radioStationMetadata;
	MPReportingTrackMetadata* _trackMetadata;
	MPReportingTimeRange _trackTimeRange;

}

@property (nonatomic,retain) NSDate * date;                                                       //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) MPReportingRadioStationMetadata * radioStationMetadata;              //@synthesize radioStationMetadata=_radioStationMetadata - In the implementation block
@property (nonatomic,retain) MPReportingTrackMetadata * trackMetadata;                            //@synthesize trackMetadata=_trackMetadata - In the implementation block
@property (assign,nonatomic) MPReportingTimeRange trackTimeRange;                                 //@synthesize trackTimeRange=_trackTimeRange - In the implementation block
-(id)radioStationMetadata;
-(id)trackMetadata;
-(void)setRadioStationMetadata:(id)arg1 ;
-(void)setTrackMetadata:(id)arg1 ;
-(void)setTrackTimeRange:(MPReportingTimeRange)arg1 ;
-(MPReportingTimeRange)trackTimeRange;
-(bool)isValid;
-(id)date;
-(void)setDate:(id)arg1 ;
-(void).cxx_destruct;
@end

