/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class MPMoviePlayerController;

@interface MPMoviePlayerViewController : UIViewController {

	id _internal;
	bool _statusBarWasHidden;

}

@property (nonatomic,readonly) MPMoviePlayerController * moviePlayer; 
-(id)initWithContentURL:(id)arg1 ;
-(void)_moviePlayerViewController_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(id)moviePlayer;
-(void)_moviePlayerViewController_playbackDidFinishNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(bool)prefersStatusBarHidden;
-(bool)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(bool)canBecomeFirstResponder;
-(void)loadView;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(bool)_canReloadView;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(bool)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(void).cxx_destruct;
@end

