/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKHostedViewController.h>

@class GKGameCenterViewController, GKRemoteGameCenterViewController;

@interface GKHostedGameCenterViewController : GKHostedViewController

@property (nonatomic,readonly) GKGameCenterViewController * _parentController; 
@property (nonatomic,readonly) GKRemoteGameCenterViewController * _remoteController; 
-(void)presentRemoteViewControllerIfNeeded;
-(id)serviceSideViewControllerClassName;
-(id)hostSideViewControllerClassName;
-(id)_presentingViewController;
-(void)didGetRemoteViewController;
-(id)_remoteController;
-(id)_parentController;
@end

