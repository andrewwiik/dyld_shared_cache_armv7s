/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIWindow.h>

@class MPMovieTVHUDView, MPVideoView;

@interface MPTVOutWindow : UIWindow {

	MPMovieTVHUDView* _hudView;
	MPVideoView* _videoView;

}
-(id)videoView;
-(void)_playbackStateChanged:(id)arg1 ;
-(bool)setVideoView:(id)arg1 ;
-(bool)_setupTargetScreen:(id)arg1 ;
-(void)_screenModeDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
@end

