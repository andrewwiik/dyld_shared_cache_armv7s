/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKRemoteViewController.h>
#import <GameCenterUI/GKMatchmakerRemoteDelegate.h>
#import <GameCenterUI/GKMatchmakerServiceViewControllerDelegate.h>

@class GKMatchmakerViewController, GKGame;

@interface GKRemoteMatchmakerViewController : GKRemoteViewController <GKMatchmakerRemoteDelegate, GKMatchmakerServiceViewControllerDelegate> {

	GKMatchmakerViewController* _delegateWeak;

}

@property (assign,nonatomic) GKMatchmakerViewController * delegate;              //@synthesize delegateWeak=_delegateWeak - In the implementation block
@property (nonatomic,retain) GKGame * game; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)setDefaultInvitationMessage:(id)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)setExistingPlayers:(id)arg1 ;
-(void)setAutomatchPlayerCount:(long long)arg1 ;
-(void)setPlayer:(id)arg1 responded:(long long)arg2 ;
-(void)setPlayer:(id)arg1 connected:(bool)arg2 ;
-(void)setPlayer:(id)arg1 sentData:(id)arg2 ;
-(void)setInvitesFailedWithError:(id)arg1 ;
-(void)setAutomatchFailedWithError:(id)arg1 ;
-(void)setFailedWithError:(id)arg1 ;
-(void)inviterCancelled;
-(void)applicationWillEnterForeground;
-(void)setHosted:(bool)arg1 ;
-(void)setMatchRequestInternal:(id)arg1 ;
-(void)setupRemoteView;
-(void)remoteViewControllerIsCanceling;
-(bool)_dismissSelfAfterGettingShouldFinish;
-(void)setNearbyPlayer:(id)arg1 reachable:(bool)arg2 ;
-(void)setBrowsingForNearbyPlayers:(bool)arg1 ;
-(void)cancelInviteToPlayer:(id)arg1 ;
-(void)startMatchingWithRequest:(id)arg1 ;
-(void)setAcceptedInviteInternal:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)sendData:(id)arg1 ;
@end

