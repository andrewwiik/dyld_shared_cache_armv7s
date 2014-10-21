/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <MediaPlayer/MPTransportControls.h>

@class MusicProspectivePlaybackInformation;

@interface MusicMiniPlayerTransportControls : MPTransportControls {

	MusicProspectivePlaybackInformation* _prospectivePlaybackInformation;

}

@property (nonatomic,retain) MusicProspectivePlaybackInformation * prospectivePlaybackInformation;              //@synthesize prospectivePlaybackInformation=_prospectivePlaybackInformation - In the implementation block
+(bool)buttonImagesUseBackgroundImage;
+(long long)buttonType;
-(bool)usesTintColorForControls;
-(id)tintColorForPart:(unsigned long long)arg1 ;
-(id)buttonImageForPart:(unsigned long long)arg1 ;
-(void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(bool)arg3 ;
-(id)newButtonForPart:(unsigned long long)arg1 ;
-(bool)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void).cxx_destruct;
-(void)setProspectivePlaybackInformation:(id)arg1 animated:(bool)arg2 ;
-(void)_prospectivePlaybackInformationDidChangeAnimated:(bool)arg1 ;
-(void)setProspectivePlaybackInformation:(id)arg1 ;
-(id)prospectivePlaybackInformation;
@end

