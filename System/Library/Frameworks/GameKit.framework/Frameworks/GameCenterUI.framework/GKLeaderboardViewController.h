/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:35 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKGameCenterViewController.h>

@protocol GKLeaderboardViewControllerDelegate;
@class NSString;

@interface GKLeaderboardViewController : GKGameCenterViewController {

	<GKLeaderboardViewControllerDelegate>* _leaderboardDelegate;

}

@property (assign,nonatomic) long long timeScope; 
@property (nonatomic,retain) NSString * category; 
@property (assign,nonatomic) <GKLeaderboardViewControllerDelegate> * leaderboardDelegate;              //@synthesize leaderboardDelegate=_leaderboardDelegate - In the implementation block
-(long long)timeScope;
-(void)setTimeScope:(long long)arg1 ;
-(void)notifyDelegateOnWillFinish;
-(id)leaderboardDelegate;
-(void)setLeaderboardDelegate:(id)arg1 ;
-(id)init;
-(void)setCategory:(id)arg1 ;
-(id)category;
@end

