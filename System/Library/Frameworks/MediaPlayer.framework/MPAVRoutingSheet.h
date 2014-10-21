/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:46 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>
#import <MediaPlayer/MPAVRoutingViewControllerDelegate.h>

@class UIWindow, UIView, UIButton, MPAVRoutingViewController;

@interface MPAVRoutingSheet : UIView <MPAVRoutingViewControllerDelegate> {

	UIWindow* _presentationWindow;
	UIView* _backgroundView;
	UIView* _controlsView;
	UIButton* _cancelButton;
	MPAVRoutingViewController* _routingViewController;
	/*^block*/ id _completionHandler;

}

@property (assign,setter=setAVItemType:,nonatomic) unsigned long long avItemType; 
-(void)_cancelButtonAction:(id)arg1 ;
-(id)initWithAVItemType:(unsigned long long)arg1 ;
-(void)showInView:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)routingViewController:(id)arg1 didPickRoute:(id)arg2 ;
-(void)routingViewControllerDidUpdateContents:(id)arg1 ;
-(void)routingViewControllerDidShowAirPlayDebugScreen:(id)arg1 ;
-(void)setAVItemType:(unsigned long long)arg1 ;
-(unsigned long long)avItemType;
-(CGRect)_routingViewFrame;
-(CGRect)_cancelButtonFrame;
-(CGRect)_controlsViewFrame;
-(void)_updateRoutingSheetFrame;
-(void)_animateControls:(bool)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(double)_rotationForCurrentOrientation;
-(CGSize)_maxRoutingViewSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)dismiss;
-(void).cxx_destruct;
@end

