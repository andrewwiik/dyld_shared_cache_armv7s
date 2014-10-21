/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionViewCell.h>

@class UILabel, GKPlayerPhotoView, NSDictionary, GKPlayer;

@interface GKBasePlayerCell : GKCollectionViewCell {

	bool _didSetupLineLayoutConstraints;
	UILabel* _nameLabel;
	GKPlayerPhotoView* _iconView;
	NSDictionary* _metricsOverrides;

}

@property (nonatomic,retain) UILabel * nameLabel;                             //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) GKPlayer * player; 
@property (nonatomic,retain) GKPlayerPhotoView * iconView;                    //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) NSDictionary * metricsOverrides;                 //@synthesize metricsOverrides=_metricsOverrides - In the implementation block
@property (assign,nonatomic) bool didSetupLineLayoutConstraints;              //@synthesize didSetupLineLayoutConstraints=_didSetupLineLayoutConstraints - In the implementation block
+(id)phoneMetrics;
+(id)padMetrics;
+(double)textOffsetForIdiom:(long long)arg1 ;
+(void)initialize;
+(bool)requiresConstraintBasedLayout;
-(void)_UIAppearance_setMetricsOverrides:(id)arg1 ;
-(void)setMetricsOverrides:(id)arg1 ;
-(void)setRepresentedItem:(id)arg1 ;
-(id)iconView;
-(void)updateLineLayoutConstraints;
-(void)didUpdateModel;
-(bool)canRemoveItem;
-(void)invalidateLineLayout;
-(id)nameLabel;
-(void)setNameLabel:(id)arg1 ;
-(void)setIconView:(id)arg1 ;
-(id)metricsOverrides;
-(bool)didSetupLineLayoutConstraints;
-(void)setDidSetupLineLayoutConstraints:(bool)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(void)updateConstraints;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end
