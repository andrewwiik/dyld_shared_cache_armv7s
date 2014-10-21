/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:50 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSEditableTableCell.h>

@class UIImage, CNFRegShadowView;

@interface CNFRegEditableTableCell : PSEditableTableCell {

	SEL _emptyStateSelector;
	SEL _didBeginEditingSelector;
	SEL _didEndEditingSelector;
	id _textChangeObserver;
	bool _textFieldIsEmpty;
	bool _skipDelegateCallback;
	UIImage* _shadowImage;
	CNFRegShadowView* _shadowView;
	UIImage* _customCheckmarkImage;
	UIImage* _customCheckmarkImageSelected;

}

@property (assign,nonatomic) bool skipDelegateCallback;                           //@synthesize skipDelegateCallback=_skipDelegateCallback - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                               //@synthesize shadowImage=_shadowImage - In the implementation block
@property (nonatomic,retain) UIImage * customCheckmarkImage;                      //@synthesize customCheckmarkImage=_customCheckmarkImage - In the implementation block
@property (nonatomic,retain) UIImage * customCheckmarkImageSelected;              //@synthesize customCheckmarkImageSelected=_customCheckmarkImageSelected - In the implementation block
@property (nonatomic,retain) CNFRegShadowView * shadowView;                       //@synthesize shadowView=_shadowView - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)setChecked:(bool)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)shadowImage;
-(void)setShadowImage:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)shadowView;
-(void)setShadowView:(id)arg1 ;
-(void)setCustomCheckmarkImage:(id)arg1 ;
-(void)setCustomCheckmarkImageSelected:(id)arg1 ;
-(void)setSkipDelegateCallback:(bool)arg1 ;
-(void)textFieldChangedExternally;
-(bool)skipDelegateCallback;
-(void)_updateTextFieldOffsetWithDict:(id)arg1 ;
-(void)_handleTextChanged;
-(bool)_textFieldIsCurrentlyEmpty;
-(void)notifyTextFieldEmptyStateChanged:(bool)arg1 ;
-(void)notifyTextFieldDidBeginEditing;
-(void)notifyTextFieldDidEndEditing;
-(id)customCheckmarkImage;
-(id)customCheckmarkImageSelected;
-(void)_startListeningForTextChanges;
-(void)_stopListeningForTextChanges;
-(void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3 ;
@end
