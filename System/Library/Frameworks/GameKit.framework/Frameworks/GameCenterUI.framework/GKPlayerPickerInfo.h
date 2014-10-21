/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GKPlayer, GKGameMatch, NSAttributedString, NSDate;

@interface GKPlayerPickerInfo : NSObject {

	bool _hasAchievement;
	bool _hasRank;
	bool _nearby;
	bool _canSelectPlayer;
	GKPlayer* _player;
	GKGameMatch* _gameMatch;
	NSAttributedString* _achievementString;
	NSAttributedString* _rankString;
	unsigned long long _selectionStatus;
	NSDate* _sortDate;

}

@property (nonatomic,retain) GKPlayer * player;                                   //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKGameMatch * gameMatch;                             //@synthesize gameMatch=_gameMatch - In the implementation block
@property (nonatomic,retain) NSAttributedString * achievementString;              //@synthesize achievementString=_achievementString - In the implementation block
@property (nonatomic,retain) NSAttributedString * rankString;                     //@synthesize rankString=_rankString - In the implementation block
@property (nonatomic,readonly) bool playedGame; 
@property (assign,nonatomic) bool hasAchievement;                                 //@synthesize hasAchievement=_hasAchievement - In the implementation block
@property (assign,nonatomic) bool hasRank;                                        //@synthesize hasRank=_hasRank - In the implementation block
@property (assign,nonatomic) bool nearby;                                         //@synthesize nearby=_nearby - In the implementation block
@property (nonatomic,readonly) unsigned long long selectionStatus;                //@synthesize selectionStatus=_selectionStatus - In the implementation block
@property (nonatomic,readonly) bool canSelectPlayer;                              //@synthesize canSelectPlayer=_canSelectPlayer - In the implementation block
@property (nonatomic,retain) NSDate * sortDate;                                   //@synthesize sortDate=_sortDate - In the implementation block
-(bool)hasAchievement;
-(bool)hasRank;
-(id)gameMatch;
-(id)achievementString;
-(id)rankString;
-(unsigned long long)selectionStatus;
-(bool)playedGame;
-(void)setAchievementString:(id)arg1 ;
-(void)setRankString:(id)arg1 ;
-(void)setGameMatch:(id)arg1 ;
-(void)setHasAchievement:(bool)arg1 ;
-(void)setHasRank:(bool)arg1 ;
-(void)setNearby:(bool)arg1 ;
-(void)setSortDate:(id)arg1 ;
-(void)_setSelectionStatus:(unsigned long long)arg1 ;
-(void)prepareForLoad;
-(bool)nearby;
-(bool)canSelectPlayer;
-(id)sortDate;
-(void)dealloc;
-(id)description;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end

