/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKBasePlayerCell.h>

@class UILabel, GKPlayerPickerInfo, UIImageView;

@interface GKPlayerPickerCell : GKBasePlayerCell {

	UILabel* _statusLabel;
	UILabel* _infoLabel;
	unsigned long long _selectionStatus;
	GKPlayerPickerInfo* _pickerInfo;
	UIImageView* _selectionView;

}

@property (nonatomic,retain) UILabel * statusLabel;                           //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) UILabel * infoLabel;                             //@synthesize infoLabel=_infoLabel - In the implementation block
@property (assign,nonatomic) unsigned long long selectionStatus;              //@synthesize selectionStatus=_selectionStatus - In the implementation block
@property (nonatomic,retain) GKPlayerPickerInfo * pickerInfo;                 //@synthesize pickerInfo=_pickerInfo - In the implementation block
@property (nonatomic,retain) UIImageView * selectionView;                     //@synthesize selectionView=_selectionView - In the implementation block
+(void)registerCellClassesWithCollectionView:(id)arg1 ;
+(Class)cellClassForPickerInfo:(id)arg1 ;
-(void)didUpdateModel;
-(id)statusLabel;
-(void)setStatusLabel:(id)arg1 ;
-(void)setInfoLabel:(id)arg1 ;
-(void)setPickerInfo:(id)arg1 ;
-(void)setSelectionStatus:(unsigned long long)arg1 ;
-(unsigned long long)selectionStatus;
-(id)pickerInfo;
-(void)setSelectionView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(id)selectionView;
-(id)infoLabel;
@end

