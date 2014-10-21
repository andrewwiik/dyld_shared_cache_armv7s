/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class CALayer, NSString;

@interface MCDButton : UIButton {

	CALayer* _focusColorLayer;
	bool _showBezelInTouch;
	NSString* _labelTemplateString;

}

@property (nonatomic,copy) NSString * labelTemplateString;                 //@synthesize labelTemplateString=_labelTemplateString - In the implementation block
@property (assign,getter=isSelected,nonatomic) bool selected; 
@property (assign,nonatomic) bool showBezelInTouch;                        //@synthesize showBezelInTouch=_showBezelInTouch - In the implementation block
+(id)buttonWithType:(long long)arg1 ;
-(void)layoutSubviews;
-(void)_focusStateDidChange;
-(bool)_isFocusableElement;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setSelected:(bool)arg1 ;
-(void).cxx_destruct;
-(void)setShowBezelInTouch:(bool)arg1 ;
-(void)setLabelTemplateString:(id)arg1 ;
-(void)_updateButtonStyle;
-(id)labelTemplateString;
-(bool)showBezelInTouch;
@end
