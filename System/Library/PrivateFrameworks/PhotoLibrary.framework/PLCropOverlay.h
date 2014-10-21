/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class PLCropOverlayCropView, UIImageView, UIView, UIToolbar, UILabel, PLProgressHUD, UIButton, PLContactPhotoOverlay, PLCropOverlayBottomBar, CAMBottomBar, PLCropOverlayWallpaperBottomBar;

@interface PLCropOverlay : UIView {

	id _delegate;
	PLCropOverlayCropView* _cropView;
	UIImageView* _shadowView;
	UIView* _overlayContainerView;
	CGRect _cropRect;
	UIToolbar* _customToolbar;
	UILabel* _titleLabel;
	UIImageView* _topShineView;
	PLProgressHUD* _hud;
	float _statusBarHeight;
	int _mode;
	unsigned _previewMode : 1;
	unsigned _cropRectIsVisible : 1;
	unsigned _offsetStatusBar : 1;
	unsigned _tookPhoto : 1;
	unsigned _showsCropRegion : 1;
	unsigned _controlsAreVisible : 1;
	unsigned _isDisplayedInPopover : 1;
	UIImageView* _bottomShineView;
	UIButton* _okButton;
	UIButton* _cancelButton;
	UIView* _wildcatPickerTopView;
	UIView* _wildcatPickerBottomView;
	bool _motionToggleIsOn;
	bool _isEditingHomeScreen;
	bool _isEditingLockScreen;
	PLContactPhotoOverlay* _contactPhotoOverlay;
	PLCropOverlayBottomBar* __bottomBar;
	UIButton* __cameraCancelButton;

}

@property (nonatomic,readonly) PLContactPhotoOverlay * contactPhotoOverlay;                       //@synthesize contactPhotoOverlay=_contactPhotoOverlay - In the implementation block
@property (nonatomic,retain) CAMBottomBar * cameraBottomBar; 
@property (nonatomic,readonly) PLCropOverlayWallpaperBottomBar * wallpaperBottomBar; 
@property (assign,nonatomic) bool motionToggleIsOn;                                               //@synthesize motionToggleIsOn=_motionToggleIsOn - In the implementation block
@property (assign,nonatomic) bool isEditingHomeScreen;                                            //@synthesize isEditingHomeScreen=_isEditingHomeScreen - In the implementation block
@property (assign,nonatomic) bool isEditingLockScreen;                                            //@synthesize isEditingLockScreen=_isEditingLockScreen - In the implementation block
@property (assign,nonatomic) bool motionToggleHidden; 
@property (assign,nonatomic) bool previewMode; 
@property (nonatomic,readonly) PLCropOverlayBottomBar * _bottomBar;                               //@synthesize _bottomBar=__bottomBar - In the implementation block
@property (nonatomic,readonly) UIButton * _cameraCancelButton;                                    //@synthesize _cameraCancelButton=__cameraCancelButton - In the implementation block
-(void)beginBackgroundSaveWithTile:(id)arg1 progressTitle:(id)arg2 completionCallbackTarget:(id)arg3 options:(int)arg4 ;
-(void)_backgroundSavePhoto:(id)arg1 ;
-(void)_savePhotoFinished:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(void)setEnabled:(bool)arg1 ;
-(int)mode;
-(void)dismiss;
-(CGRect)titleRect;
-(void)_setMode:(int)arg1 ;
-(void)_updateToolbarItems:(bool)arg1 ;
-(id)_newOverlayViewWithFrame:(CGRect)arg1 lighterEdgeOnTop:(bool)arg2 ;
-(bool)isTelephonyUIMode:(int)arg1 ;
-(void)_tappedBottomBarCancelButton:(id)arg1 ;
-(void)_tappedBottomBarDoneButton:(id)arg1 ;
-(void)_tappedBottomBarPlaybackButton:(id)arg1 ;
-(void)_tappedBottomBarSetHomeButton;
-(void)_tappedBottomBarSetLockButton;
-(void)_tappedBottomBarSetBothButton;
-(void)_tappedBottomBarMotionToggle;
-(void)statusBarHeightDidChange:(id)arg1 ;
-(void)_updateTitle;
-(void)_updateCropRectInRect:(CGRect)arg1 ;
-(id)contactPhotoOverlay;
-(id)cameraBottomBar;
-(void)setCameraBottomBar:(id)arg1 ;
-(id)wallpaperBottomBar;
-(void)setShowsCropRegion:(bool)arg1 ;
-(void)setCropRectVisible:(bool)arg1 duration:(float)arg2 ;
-(id)initWithFrame:(CGRect)arg1 mode:(int)arg2 offsettingStatusBar:(bool)arg3 isDisplayedInPopover:(bool)arg4 ;
-(id)_irisView;
-(void)_createCropView;
-(id)_bottomBar;
-(void)_updateMotionToggle;
-(void)_fadeOutCompleted:(id)arg1 ;
-(void)setMotionToggleIsOn:(bool)arg1 ;
-(void)_updateWallpaperBottomBarSettingButtons;
-(void)setMotionToggleHidden:(bool)arg1 ;
-(bool)motionToggleHidden;
-(void)cropOverlayBottomBarPlayButtonClicked:(id)arg1 ;
-(void)cropOverlayBottomBarPauseButtonClicked:(id)arg1 ;
-(bool)isWallpaperUIMode:(int)arg1 ;
-(void)_playButtonPressed:(id)arg1 ;
-(void)_pauseButtonPressed:(id)arg1 ;
-(bool)controlsAreVisible;
-(void)setControlsAreVisible:(bool)arg1 ;
-(id)overlayContainerView;
-(void)setOverlayContainerView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 mode:(int)arg2 ;
-(void)insertIrisView:(id)arg1 ;
-(id)bottomBar;
-(CGRect)bottomBarFrame;
-(void)didCapturePhoto;
-(void)didCaptureVideo;
-(void)didPlayVideo;
-(void)didPauseVideo;
-(void)cancelButtonClicked:(id)arg1 ;
-(void)setIsEditingHomeScreen:(bool)arg1 ;
-(void)setIsEditingLockScreen:(bool)arg1 ;
-(CGRect)cropRect;
-(void)setTitle:(id)arg1 okButtonTitle:(id)arg2 ;
-(void)setOKButtonTitle:(id)arg1 ;
-(void)setOKButtonShowsCamera:(bool)arg1 ;
-(void)setCancelButtonTitle:(id)arg1 ;
-(void)setCancelButtonHidden:(bool)arg1 ;
-(void)setShowProgress:(bool)arg1 title:(id)arg2 ;
-(void)removeProgress;
-(void)setProgressDone;
-(void)setTitleHidden:(bool)arg1 animationDuration:(double)arg2 ;
-(void)setPreviewMode:(bool)arg1 ;
-(bool)previewMode;
-(bool)motionToggleIsOn;
-(bool)isEditingHomeScreen;
-(bool)isEditingLockScreen;
-(id)_cameraCancelButton;
@end

