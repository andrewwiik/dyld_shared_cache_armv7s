/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterFoundation/GKLeaderboard.h>

@protocol OS_dispatch_queue;
@class GKGame, GKPlayer, NSArray, GKScore, NSError, NSObject, NSMutableArray;

@interface GKScoreLeaderboard : GKLeaderboard {

	GKGame* _game;
	GKPlayer* _player;
	NSRange _totalRange;
	NSRange _displayedRange;
	NSArray* _showcasedScores;
	unsigned long long _maxLoaded;
	NSRange _currentRange;
	GKScore* _comparePlayerScore;
	NSError* _error;
	NSObject<OS_dispatch_queue>* _loadQueue;
	NSMutableArray* _allScores;

}

@property (nonatomic,retain) GKGame * game;                                          //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                                      //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) NSRange totalRange;                                   //@synthesize totalRange=_totalRange - In the implementation block
@property (assign,nonatomic) NSRange displayedRange;                                 //@synthesize displayedRange=_displayedRange - In the implementation block
@property (nonatomic,retain) GKScore * comparePlayerScore;                           //@synthesize comparePlayerScore=_comparePlayerScore - In the implementation block
@property (nonatomic,retain) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * loadQueue;              //@synthesize loadQueue=_loadQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * allScores;                             //@synthesize allScores=_allScores - In the implementation block
-(void)setError:(id)arg1 ;
-(id)game;
-(void)setGame:(id)arg1 ;
-(id)placeholderLeaderboardItemsForRankRange:(NSRange)arg1 ;
-(id)comparePlayerScore;
-(NSRange)displayedRange;
-(id)loadQueue;
-(void)loadScoresForGame:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)setComparePlayerScore:(id)arg1 ;
-(id)initWithGame:(id)arg1 ;
-(NSRange)totalRange;
-(void)setDisplayedRange:(NSRange)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)initRangeAndQueue;
-(id)allScores;
-(id)insertLeaderboardScores:(id)arg1 ;
-(id)scoreAtIndex:(long long)arg1 ;
-(id)scoresInRange:(NSRange)arg1 ;
-(long long)maxLoadedScores;
-(void)setAllScores:(id)arg1 ;
-(void)dealloc;
-(id)error;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end

