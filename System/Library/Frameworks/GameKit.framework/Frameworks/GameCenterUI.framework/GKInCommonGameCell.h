/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKPlayerGameCell.h>

@class GKGameRecord;

@interface GKInCommonGameCell : GKPlayerGameCell {

	GKGameRecord* _localPlayerGameRecord;

}

@property (nonatomic,retain) GKGameRecord * localPlayerGameRecord;              //@synthesize localPlayerGameRecord=_localPlayerGameRecord - In the implementation block
-(void)didUpdateModel;
-(id)leaderboardStringWithGameRecord:(id)arg1 ;
-(id)localPlayerGameRecord;
-(void)setLocalPlayerGameRecord:(id)arg1 ;
-(void)prepareForReuse;
@end

