/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:46 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libacmobileshim.dylib/ACMDialog.h>
#import <libacmobileshim.dylib/ACMSignInDialogProtocol.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <libacmobileshim.dylib/ACMSignInWidgetDelegate.h>

@protocol ACMSignInDialogDelegate;
@class ACMExternalAuthenticationRequestImpl, NSString, ACMSignInWidget, UITextField;

@interface ACMSignInDialog : ACMDialog <ACMSignInDialogProtocol, UITextFieldDelegate, UIAlertViewDelegate, ACMSignInWidgetDelegate> {

	<ACMSignInDialogDelegate>* _delegate;
	ACMExternalAuthenticationRequestImpl* _request;
	ACMSignInWidget* _widget;
	long long _signInDialogState;
	UITextField* _accountNameField;
	UITextField* _passwordField;
	NSString* _textFieldValueBeforeEditing;
	NSString* _textFieldValueAfterEditing;
	long long _undoRedoField;
	NSString* _accountNameText;
	NSString* _passwordText;
	unsigned long long _accountNameFieldCursorPosition;
	unsigned long long _passwordFieldCursorPosition;

}

@property (nonatomic,readonly) ACMSignInWidget * widget;                                     //@synthesize widget=_widget - In the implementation block
@property (nonatomic,retain) UITextField * accountNameField;                                 //@synthesize accountNameField=_accountNameField - In the implementation block
@property (nonatomic,retain) UITextField * passwordField;                                    //@synthesize passwordField=_passwordField - In the implementation block
@property (readonly) NSString * requestedUserName; 
@property (readonly) NSString * passwordString; 
@property (readonly) NSString * userNameString; 
@property (nonatomic,retain) NSString * accountNameText;                                     //@synthesize accountNameText=_accountNameText - In the implementation block
@property (nonatomic,retain) NSString * passwordText;                                        //@synthesize passwordText=_passwordText - In the implementation block
@property (assign,nonatomic) unsigned long long accountNameFieldCursorPosition;              //@synthesize accountNameFieldCursorPosition=_accountNameFieldCursorPosition - In the implementation block
@property (assign,nonatomic) unsigned long long passwordFieldCursorPosition;                 //@synthesize passwordFieldCursorPosition=_passwordFieldCursorPosition - In the implementation block
@property (nonatomic,retain) NSString * textFieldValueBeforeEditing;                         //@synthesize textFieldValueBeforeEditing=_textFieldValueBeforeEditing - In the implementation block
@property (nonatomic,retain) NSString * textFieldValueAfterEditing;                          //@synthesize textFieldValueAfterEditing=_textFieldValueAfterEditing - In the implementation block
@property (assign,nonatomic) long long undoRedoField;                                        //@synthesize undoRedoField=_undoRedoField - In the implementation block
@property (assign,nonatomic) long long signInDialogState;                                    //@synthesize signInDialogState=_signInDialogState - In the implementation block
@property (assign) <ACMSignInDialogDelegate> * delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (retain) ACMExternalAuthenticationRequestImpl * request;                           //@synthesize request=_request - In the implementation block
-(void)setPasswordField:(id)arg1 ;
-(void)setRequest:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(id)request;
-(id)passwordString;
-(id)passwordField;
-(long long)signInDialogState;
-(void)setSignInDialogState:(long long)arg1 ;
-(void)setAccountNameField:(id)arg1 ;
-(id)requestedUserName;
-(bool)shouldSignIn;
-(void)controlsWillChangeState:(bool)arg1 ;
-(void)controlsDidChangeState:(bool)arg1 ;
-(void)onSignInTouchDown:(id)arg1 ;
-(void)onSignInTouchUpOutside:(id)arg1 ;
-(void)undoManagerDidUndo:(id)arg1 ;
-(void)undoManagerDidRedo:(id)arg1 ;
-(void)setAccountNameText:(id)arg1 ;
-(void)setPasswordText:(id)arg1 ;
-(void)setTextFieldValueBeforeEditing:(id)arg1 ;
-(void)setTextFieldValueAfterEditing:(id)arg1 ;
-(id)accountNameText;
-(unsigned long long)accountNameFieldCursorPosition;
-(id)passwordText;
-(unsigned long long)passwordFieldCursorPosition;
-(long long)undoRedoField;
-(id)textFieldValueBeforeEditing;
-(id)textFieldValueAfterEditing;
-(bool)shouldAuthenticateOnUserInput;
-(void)onSignIn:(id)arg1 ;
-(void)setUndoRedoField:(long long)arg1 ;
-(void)setAccountNameFieldCursorPosition:(unsigned long long)arg1 ;
-(void)setPasswordFieldCursorPosition:(unsigned long long)arg1 ;
-(void)onIForgot:(id)arg1 ;
-(id)widget;
-(void)checkTextFields;
-(void)disableControls:(bool)arg1 ;
-(void)signInDialogShouldClosed;
-(void)onSignInCancel:(id)arg1 ;
-(id)accountNameField;
-(id)userNameString;
@end

