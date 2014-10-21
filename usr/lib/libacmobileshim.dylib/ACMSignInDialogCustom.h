/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:46 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libacmobileshim.dylib/ACMSignInDialog.h>

@class UIButton, UIBarButtonItem, NSString;

@interface ACMSignInDialogCustom : ACMSignInDialog {

	UIButton* _signInButton;
	UIButton* _cancelButton;
	UIBarButtonItem* _signInBarButton;
	UIBarButtonItem* _cancelBarButton;
	bool _shouldAuthenticateOnUserInput;

}

@property (assign,nonatomic) CGPoint widgetPosition; 
@property (assign,nonatomic) NSString * widgetAccountLabel; 
@property (assign,nonatomic) long long widgetPasswordReturnKeyType; 
@property (nonatomic,retain) UIButton * signInButton;                            //@synthesize signInButton=_signInButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * signInBarButton;                  //@synthesize signInBarButton=_signInBarButton - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                            //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelBarButton;                  //@synthesize cancelBarButton=_cancelBarButton - In the implementation block
-(void)dealloc;
-(id)init;
-(void)loadView;
-(id)cancelButton;
-(void)setCancelButton:(id)arg1 ;
-(id)signInButton;
-(void)checkFields;
-(bool)shouldSignIn;
-(id)signInBarButton;
-(id)cancelBarButton;
-(CGPoint)widgetPosition;
-(id)widgetAccountLabel;
-(long long)widgetPasswordReturnKeyType;
-(bool)shouldAuthenticateOnUserInput;
-(void)onSignIn:(id)arg1 ;
-(void)disableControls:(bool)arg1 ;
-(void)setWidgetPosition:(CGPoint)arg1 ;
-(void)setWidgetAccountLabel:(id)arg1 ;
-(void)setWidgetPasswordReturnKeyType:(long long)arg1 ;
-(void)setSignInBarButton:(id)arg1 ;
-(void)setSignInButton:(id)arg1 ;
-(void)setShouldAuthenticateOnUserInput:(bool)arg1 ;
-(void)setCancelBarButton:(id)arg1 ;
-(void)showWithParentViewController:(id)arg1 animated:(bool)arg2 ;
-(void)hideWithParentViewController:(id)arg1 animated:(bool)arg2 ;
@end
