/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPVideoControllerProtocol <MPControllerProtocol>
@property (assign,nonatomic) bool allowsDetailScrubbing; 
@property (assign,nonatomic) bool allowsWirelessPlayback; 
@property (assign,nonatomic) bool alwaysAllowHidingControlsOverlay; 
@property (assign,nonatomic) int artworkImageStyle; 
@property (assign,nonatomic) bool attemptAutoPlayWhenControlsHidden; 
@property (nonatomic,readonly) UIView * backgroundView; 
@property (nonatomic,retain) UIColor * backstopColor; 
@property (assign,nonatomic) bool canAnimateControlsOverlay; 
@property (nonatomic,readonly) bool canChangeScaleMode; 
@property (assign,nonatomic) bool canShowControlsOverlay; 
@property (assign,nonatomic) bool controlsOverlayVisible; 
@property (assign,nonatomic) unsigned long long desiredParts; 
@property (assign,nonatomic) bool disableAutoRotation; 
@property (assign,nonatomic) bool disableControlsAutohide; 
@property (assign,nonatomic) unsigned long long disabledParts; 
@property (assign,nonatomic) bool displayPlaybackErrorAlerts; 
@property (nonatomic,readonly) _UIHostedWindow * hostedWindow; 
@property (nonatomic,readonly) unsigned hostedWindowContextID; 
@property (assign,nonatomic) bool inlinePlaybackUsesTVOut; 
@property (assign,nonatomic) unsigned long long itemTypeOverride; 
@property (assign,getter=isFullscreen,nonatomic) bool fullscreen; 
@property (nonatomic,retain) UIImage * posterImage; 
@property (assign,nonatomic) unsigned long long scaleMode; 
@property (assign,nonatomic) bool TVOutEnabled; 
@property (nonatomic,readonly) bool viewControllerWillRequestExit; 
@property (nonatomic,readonly) UIView<MPVideoOverlay> * videoOverlayView; 
@property (nonatomic,readonly) MPVideoView * videoView; 
@property (assign,nonatomic) unsigned long long visibleParts; 
@property (assign,nonatomic) bool autoPlayWhenLikelyToKeepUp; 
@required
-(bool)isFullscreen;
-(void)setFullscreen:(bool)arg1;
-(void)setFullscreen:(bool)arg1 animated:(bool)arg2;
-(void)setScaleModeOverride:(unsigned long long)arg1 animated:(bool)arg2;
-(unsigned long long)scaleMode;
-(void)setCanShowControlsOverlay:(bool)arg1;
-(void)setAutoPlayWhenLikelyToKeepUp:(bool)arg1;
-(void)setAllowsWirelessPlayback:(bool)arg1;
-(bool)allowsWirelessPlayback;
-(bool)TVOutEnabled;
-(void)setItemTypeOverride:(unsigned long long)arg1;
-(id)videoView;
-(bool)canShowControlsOverlay;
-(void)displayVideoView;
-(void)setControlsOverlayVisible:(bool)arg1 animate:(bool)arg2;
-(bool)controlsOverlayVisible;
-(id)videoOverlayView;
-(unsigned long long)visibleParts;
-(unsigned long long)desiredParts;
-(void)setDesiredParts:(unsigned long long)arg1;
-(void)setVisibleParts:(unsigned long long)arg1;
-(bool)alwaysAllowHidingControlsOverlay;
-(void)setAlwaysAllowHidingControlsOverlay:(bool)arg1;
-(void)setControlsOverlayVisible:(bool)arg1 animate:(bool)arg2 force:(bool)arg3;
-(void)setDisplayPlaybackErrorAlerts:(bool)arg1;
-(void)setUseHostedWindowWhenFullscreen:(bool)arg1;
-(void)setTVOutEnabled:(bool)arg1;
-(void)setInlinePlaybackUsesTVOut:(bool)arg1;
-(bool)inlinePlaybackUsesTVOut;
-(id)hostedWindow;
-(unsigned)hostedWindowContextID;
-(void)setDisabledParts:(unsigned long long)arg1;
-(void)setAttemptAutoPlayWhenControlsHidden:(bool)arg1;
-(void)setClosedCaptions:(id)arg1;
-(void)setPosterImage:(id)arg1;
-(void)setArtworkImageStyle:(int)arg1;
-(void)setCanAnimateControlsOverlay:(bool)arg1;
-(void)setDisableControlsAutohide:(bool)arg1;
-(void)setDisableAutoRotation:(bool)arg1;
-(void)setDesiredParts:(unsigned long long)arg1 animate:(bool)arg2;
-(void)setVisibleParts:(unsigned long long)arg1 animate:(bool)arg2;
-(bool)canHideOverlay:(bool)arg1;
-(void)setAllowsDetailScrubbing:(bool)arg1;
-(void)setControlsNeedLayout;
-(bool)viewControllerWillRequestExit;
-(void)prepareToDisplayVideo;
-(bool)autoPlayWhenLikelyToKeepUp;
-(bool)disableControlsAutohide;
-(int)artworkImageStyle;
-(unsigned long long)itemTypeOverride;
-(bool)canChangeScaleMode;
-(void)setScaleMode:(unsigned long long)arg1;
-(unsigned long long)disabledParts;
-(void)exitFullscreen;
-(void)showAlternateTracksController:(id)arg1;
-(void)setOwnsStatusBar:(bool)arg1;
-(bool)allowsDetailScrubbing;
-(bool)attemptAutoPlayWhenControlsHidden;
-(id)backstopColor;
-(void)setBackstopColor:(id)arg1;
-(bool)canAnimateControlsOverlay;
-(void)setControlsOverlayVisible:(bool)arg1;
-(bool)disableAutoRotation;
-(bool)displayPlaybackErrorAlerts;
-(id)backgroundView;
-(id)posterImage;
@end

