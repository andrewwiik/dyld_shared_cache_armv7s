/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:29 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Wallpaper/Wallpaper-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol WallpaperMagicButtonActionHandler;
@class UIButton, UILabel, WallpaperMagicTableViewCellSpec;

@interface WallpaperMagicTableViewCell : UITableViewCell {

	UIButton* _dynamicButton;
	UIButton* _vrButton;
	UIButton* _panoramaButton;
	UILabel* _dynamicLabel;
	UILabel* _vrLabel;
	UILabel* _panoramaLabel;
	UIButton* _stillsButton;
	UILabel* _stillsLabel;
	<WallpaperMagicButtonActionHandler>* _selectionTarget;
	WallpaperMagicTableViewCellSpec* _cellSpec;
	CGSize _buttonSize;

}

@property (nonatomic,retain) UIButton * dynamicButton;                                                  //@synthesize dynamicButton=_dynamicButton - In the implementation block
@property (nonatomic,retain) UIButton * vrButton;                                                       //@synthesize vrButton=_vrButton - In the implementation block
@property (nonatomic,retain) UIButton * panoramaButton;                                                 //@synthesize panoramaButton=_panoramaButton - In the implementation block
@property (nonatomic,retain) UILabel * dynamicLabel;                                                    //@synthesize dynamicLabel=_dynamicLabel - In the implementation block
@property (nonatomic,retain) UILabel * vrLabel;                                                         //@synthesize vrLabel=_vrLabel - In the implementation block
@property (nonatomic,retain) UILabel * panoramaLabel;                                                   //@synthesize panoramaLabel=_panoramaLabel - In the implementation block
@property (nonatomic,retain) UIButton * stillsButton;                                                   //@synthesize stillsButton=_stillsButton - In the implementation block
@property (nonatomic,retain) UILabel * stillsLabel;                                                     //@synthesize stillsLabel=_stillsLabel - In the implementation block
@property (assign,nonatomic) CGSize buttonSize;                                                         //@synthesize buttonSize=_buttonSize - In the implementation block
@property (assign,nonatomic,__weak) <WallpaperMagicButtonActionHandler> * selectionTarget;              //@synthesize selectionTarget=_selectionTarget - In the implementation block
@property (nonatomic,retain) WallpaperMagicTableViewCellSpec * cellSpec;                                //@synthesize cellSpec=_cellSpec - In the implementation block
-(void)layoutSubviews;
-(void).cxx_destruct;
-(void)setSelectionTarget:(id)arg1 ;
-(id)selectionTarget;
-(id)vrButton;
-(id)panoramaButton;
-(id)dynamicButton;
-(id)stillsButton;
-(void)setCellSpec:(id)arg1 ;
-(id)vrLabel;
-(id)panoramaLabel;
-(id)dynamicLabel;
-(id)stillsLabel;
-(CGRect)_rectForMagicWallpaperElement:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)cellSpec;
-(void)setDynamicButton:(id)arg1 ;
-(void)setVrButton:(id)arg1 ;
-(void)setPanoramaButton:(id)arg1 ;
-(void)setDynamicLabel:(id)arg1 ;
-(void)setVrLabel:(id)arg1 ;
-(void)setPanoramaLabel:(id)arg1 ;
-(void)setStillsButton:(id)arg1 ;
-(void)setStillsLabel:(id)arg1 ;
-(id)initWithSpec:(id)arg1 ;
-(void)setButtonSize:(CGSize)arg1 ;
-(CGSize)buttonSize;
@end

