/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/CAMTriStateButton.h>

@protocol CAMFlashButtonDelegate;
@interface CAMFlashButton : CAMTriStateButton {

	<CAMFlashButtonDelegate>* _delegate;

}

@property (assign,getter=isAutoHidden,nonatomic) bool autoHidden; 
@property (assign,getter=isShowingWarningIndicator,nonatomic) bool showWarningIndicator; 
@property (assign,nonatomic) long long flashMode; 
@property (assign,nonatomic) <CAMFlashButtonDelegate> * delegate;                                     //@synthesize delegate=_delegate - In the implementation block
+(id)flashButton;
-(long long)flashMode;
-(void)setFlashMode:(long long)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(long long)_flashModeForTriStateMode:(int)arg1 ;
-(int)_triStateModeForFlashMode:(long long)arg1 ;
-(void)setFlashMode:(long long)arg1 notifyDelegate:(bool)arg2 ;
-(id)_iconImageName;
-(id)_offLabelTextForLandscape:(bool)arg1 ;
-(id)_onLabelTextForLandscape:(bool)arg1 ;
-(id)_autoLabelTextForLandscape:(bool)arg1 ;
-(void)_notifyModeDidChange;
-(void)_notifyWasPressed;
-(void)_notifyWillExpand;
-(void)_notifyDidCollapse;
@end

