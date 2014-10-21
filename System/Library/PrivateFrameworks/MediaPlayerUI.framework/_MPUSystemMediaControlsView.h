/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>

@class MPUTransportControlsView, MPUChronologicalProgressView, MPUMediaControlsTitlesView, MPUMediaControlsVolumeView;

@interface _MPUSystemMediaControlsView : UIView {

	long long _style;
	MPUTransportControlsView* _transportControlsView;
	MPUChronologicalProgressView* _timeInformationView;
	MPUMediaControlsTitlesView* _trackInformationView;
	MPUMediaControlsVolumeView* _volumeView;

}

@property (nonatomic,readonly) long long style;                                               //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) MPUTransportControlsView * transportControlsView;                //@synthesize transportControlsView=_transportControlsView - In the implementation block
@property (nonatomic,retain) MPUChronologicalProgressView * timeInformationView;              //@synthesize timeInformationView=_timeInformationView - In the implementation block
@property (nonatomic,retain) MPUMediaControlsTitlesView * trackInformationView;               //@synthesize trackInformationView=_trackInformationView - In the implementation block
@property (nonatomic,retain) MPUMediaControlsVolumeView * volumeView;                         //@synthesize volumeView=_volumeView - In the implementation block
-(id)volumeView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(long long)style;
-(id)initWithStyle:(long long)arg1 ;
-(void).cxx_destruct;
-(id)transportControlsView;
-(id)timeInformationView;
-(id)trackInformationView;
-(void)updatePlaybackState:(bool)arg1 ;
-(void)_layoutSubviewsControlCenteriPad;
-(void)setTransportControlsView:(id)arg1 ;
-(void)setTimeInformationView:(id)arg1 ;
-(void)setTrackInformationView:(id)arg1 ;
-(void)setVolumeView:(id)arg1 ;
@end

