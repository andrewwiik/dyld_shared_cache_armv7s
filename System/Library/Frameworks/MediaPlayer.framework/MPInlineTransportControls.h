/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPTransportControls.h>

@class UILabel, UIActivityIndicatorView;

@interface MPInlineTransportControls : MPTransportControls {

	UILabel* _loadingMovieLabel;
	UIActivityIndicatorView* _loadingMovieIndicator;

}

@property (nonatomic,readonly) CGRect availableProgressControlAreaFrame; 
-(void)setDisabledParts:(unsigned long long)arg1 ;
-(id)pauseButtonImage;
-(id)playButtonImage;
-(id)buttonImageForPart:(unsigned long long)arg1 ;
-(void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(bool)arg3 ;
-(id)newButtonForPart:(unsigned long long)arg1 ;
-(void)_disableAnimationIfNecessary:(id)arg1 ;
-(void)_enableAnimationIfNecessary:(id)arg1 ;
-(CGRect)availableProgressControlAreaFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void).cxx_destruct;
@end
