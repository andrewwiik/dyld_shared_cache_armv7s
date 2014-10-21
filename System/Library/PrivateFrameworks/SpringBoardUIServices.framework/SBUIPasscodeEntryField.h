/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SBUIPasscodeEntryFieldDelegate;
@class UITextField, NSMutableCharacterSet, UIColor, NSString;

@interface SBUIPasscodeEntryField : UIView <UITextFieldDelegate> {

	<SBUIPasscodeEntryFieldDelegate>* _delegate;
	UITextField* _textField;
	NSMutableCharacterSet* _numericTrimmingSet;
	bool _ignoreCallbacks;
	bool _resigningFirstResponder;
	UIColor* _customBackgroundColor;

}

@property (assign,nonatomic) <SBUIPasscodeEntryFieldDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,@dynamic,copy) NSString * stringValue; 
@property (nonatomic,retain) UIColor * customBackgroundColor;                          //@synthesize customBackgroundColor=_customBackgroundColor - In the implementation block
@property (getter=_textField,nonatomic,readonly) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)appendString:(id)arg1 ;
-(bool)resignFirstResponder;
-(bool)becomeFirstResponder;
-(bool)isFirstResponder;
-(bool)canBecomeFirstResponder;
-(bool)textFieldShouldBeginEditing:(id)arg1 ;
-(bool)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(bool)textFieldShouldReturn:(id)arg1 ;
-(id)initWithDefaultSize;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(void)deleteLastCharacter;
-(void)reset;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)setCustomBackgroundColor:(id)arg1 ;
-(void)resetForFailedPasscode;
-(id)customBackgroundColor;
-(void)_setLuminosityBoost:(double)arg1 ;
-(void)_resetForFailedPasscode:(bool)arg1 playUnlockFailedSound:(bool)arg2 ;
-(void)_autofillForMesaWithCompletion:(/*^block*/ id)arg1 ;
-(void)_appendString:(id)arg1 ;
-(void)_deleteLastCharacter;
-(bool)_hasAnyCharacters;
-(CGSize)_viewSize;
-(bool)_baseBecomeFirstResponder;
-(bool)_baseResignFirstResponder;
-(void)notePasscodeFieldDidAcceptEntry;
-(bool)shouldInsertPasscodeText:(id)arg1 ;
-(void)notePasscodeFieldTextDidChange;
-(void)_handleKeyUIEvent:(id)arg1 source:(int)arg2 ;
-(id)_textField;
@end

