/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:46 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPVideoOverlayDelegate <NSObject>
@optional
-(void)overlayDidBeginScrubbing:(id)arg1;
-(void)overlayDidEndScrubbing:(id)arg1;
-(void)overlayTappedBackButton:(id)arg1;
-(void)overlayTappedFullscreenButton:(id)arg1;
-(void)overlay:(id)arg1 didBeginUserEvent:(long long)arg2;
-(void)overlay:(id)arg1 didCancelUserEvent:(long long)arg2;
-(void)overlay:(id)arg1 didEndUserEvent:(long long)arg2;
-(void)overlayTappedScaleModeButton:(id)arg1;
-(void)overlayDidDismissAlternateTracksPopover:(id)arg1;
@end
