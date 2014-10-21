/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:52 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SKUIRedeemCameraViewDelegate;
@class SKUIRedeemTextField, SKUIRedeemCameraLandingView, UIView, UIScrollView, UIButton, UIImage, NSString;

@interface SKUIIPadRedeemCameraView : UIView <UITextFieldDelegate> {

	<SKUIRedeemCameraViewDelegate>* _delegate;
	SKUIRedeemTextField* _inputAccessoryTextField;
	SKUIRedeemCameraLandingView* _landingView;
	UIView* _redeemerView;
	UIScrollView* _scrollView;
	UIButton* _termsButton;
	SKUIRedeemTextField* _textField;

}

@property (assign,nonatomic,__weak) <SKUIRedeemCameraViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) bool enabled; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * text; 
-(void)textFieldTextDidChange:(id)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)image;
-(void)setEnabled:(bool)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(bool)textFieldShouldReturn:(id)arg1 ;
-(void)start;
-(void)showKeyboard;
-(bool)enabled;
-(void).cxx_destruct;
-(void)_termsButtonAction:(id)arg1 ;
-(void)_landingButtonAction:(id)arg1 ;
-(id)_newTextFieldWithClientContext:(id)arg1 placeholderColor:(id)arg2 ;
-(void)_hideKeyboard;
-(void)keyboardDidChange:(id)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
@end

