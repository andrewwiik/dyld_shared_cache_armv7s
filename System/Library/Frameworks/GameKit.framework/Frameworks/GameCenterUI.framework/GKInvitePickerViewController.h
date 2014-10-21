/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKPlayerPickerViewController.h>

@class GKInvitePickerDataSource, NSSet;

@interface GKInvitePickerViewController : GKPlayerPickerViewController {

	GKInvitePickerDataSource* _invitePickerDataSource;
	NSSet* _hiddenPlayers;

}

@property (nonatomic,retain) GKInvitePickerDataSource * invitePickerDataSource;              //@synthesize invitePickerDataSource=_invitePickerDataSource - In the implementation block
@property (nonatomic,retain) NSSet * hiddenPlayers;                                          //@synthesize hiddenPlayers=_hiddenPlayers - In the implementation block
-(void)configureDataSource;
-(void)didEnterNoContentState;
-(void)setSupportsNearby:(bool)arg1 ;
-(void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned long long)arg2 didSelectDataSourceWithIndex:(long long)arg3 ;
-(id)initWithGame:(id)arg1 selectedPlayerIDs:(id)arg2 hiddenPlayers:(id)arg3 ;
-(id)splitingDataSource;
-(void)setHiddenPlayers:(id)arg1 ;
-(id)hiddenPlayers;
-(void)setInvitePickerDataSource:(id)arg1 ;
-(void)configureNearbyDataSource;
-(id)invitePickerDataSource;
-(void)dealloc;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(bool)arg1 ;
@end

