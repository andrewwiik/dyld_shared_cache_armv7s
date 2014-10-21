/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKSimpleComposeController.h>

@class GKComposeHeaderField, GKChallenge, NSArray;

@interface GKChallengeComposeController : GKSimpleComposeController {

	GKComposeHeaderField* _challengeField;
	GKChallenge* _challenge;
	NSArray* _playerIDsToLoad;

}

@property (nonatomic,retain) GKComposeHeaderField * challengeField;              //@synthesize challengeField=_challengeField - In the implementation block
@property (nonatomic,retain) GKChallenge * challenge;                            //@synthesize challenge=_challenge - In the implementation block
@property (nonatomic,retain) NSArray * playerIDsToLoad;                          //@synthesize playerIDsToLoad=_playerIDsToLoad - In the implementation block
+(id)friendPickerFlowForChallenge:(id)arg1 selectPlayerIDs:(id)arg2 defaultMessage:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
+(id)composeFlowForChallenge:(id)arg1 playerIDs:(id)arg2 defaultMessage:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
+(void)composeAndSendFlowForChallenge:(id)arg1 selectPlayerIDs:(id)arg2 defaultMessage:(id)arg3 forcePicker:(bool)arg4 readyHandler:(/*^block*/ id)arg5 completionHandler:(/*^block*/ id)arg6 ;
-(void)donePressed;
-(id)initWithChallenge:(id)arg1 defaultMessage:(id)arg2 players:(id)arg3 ;
-(void)setPlayerIDsToLoad:(id)arg1 ;
-(void)setChallengeField:(id)arg1 ;
-(void)updateChallengeText;
-(id)challengeField;
-(id)playerIDsToLoad;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)cancel;
-(id)challenge;
-(void)setChallenge:(id)arg1 ;
@end

