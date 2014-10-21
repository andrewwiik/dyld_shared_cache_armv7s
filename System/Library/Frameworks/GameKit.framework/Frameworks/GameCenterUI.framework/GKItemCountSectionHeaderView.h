/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:35 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKSectionHeaderView.h>

@interface GKItemCountSectionHeaderView : GKSectionHeaderView {

	bool _allSectionItemsVisible;
	SEL _showAllAction;
	unsigned long long _sectionIndex;
	long long _itemCount;
	long long _maxItemCount;

}

@property (assign,nonatomic) SEL showAllAction;                            //@synthesize showAllAction=_showAllAction - In the implementation block
@property (assign,nonatomic) unsigned long long sectionIndex;              //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (assign,nonatomic) bool allSectionItemsVisible;                  //@synthesize allSectionItemsVisible=_allSectionItemsVisible - In the implementation block
@property (assign,nonatomic) long long itemCount;                          //@synthesize itemCount=_itemCount - In the implementation block
@property (assign,nonatomic) long long maxItemCount;                       //@synthesize maxItemCount=_maxItemCount - In the implementation block
-(bool)allSectionItemsVisible;
-(void)setItemCount:(long long)arg1 ;
-(void)setMaxItemCount:(long long)arg1 ;
-(long long)maxItemCount;
-(void)setAllSectionItemsVisible:(bool)arg1 ;
-(void)showAllTouched:(id)arg1 ;
-(void)updateRightLabel;
-(bool)shouldDisplayShowAllButton;
-(void)setShowAllAction:(SEL)arg1 ;
-(SEL)showAllAction;
-(long long)itemCount;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)applyLayoutAttributes:(id)arg1 ;
-(unsigned long long)sectionIndex;
-(void)setSectionIndex:(unsigned long long)arg1 ;
@end

