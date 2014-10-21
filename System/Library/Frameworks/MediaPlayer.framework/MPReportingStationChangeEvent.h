/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPReportingEvent.h>

@class MPReportingRadioStationMetadata;

@interface MPReportingStationChangeEvent : MPReportingEvent {

	MPReportingRadioStationMetadata* _oldStationMetadata;
	MPReportingRadioStationMetadata* _currentStationMetadata;

}

@property (nonatomic,retain) MPReportingRadioStationMetadata * oldStationMetadata;                  //@synthesize oldStationMetadata=_oldStationMetadata - In the implementation block
@property (nonatomic,retain) MPReportingRadioStationMetadata * currentStationMetadata;              //@synthesize currentStationMetadata=_currentStationMetadata - In the implementation block
-(id)currentStationMetadata;
-(id)oldStationMetadata;
-(void)setOldStationMetadata:(id)arg1 ;
-(void)setCurrentStationMetadata:(id)arg1 ;
-(bool)isValid;
-(void).cxx_destruct;
@end

