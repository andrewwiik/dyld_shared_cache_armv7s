/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:46 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMAppleConnectPrivate.h>
#import <libacmobileshim.dylib/ACMSignInDialogDelegate.h>

@class ACMSignInDialog, NSMutableSet;

@interface ACMAppleConnectExternal : ACMAppleConnectPrivate <ACMSignInDialogDelegate> {

	ACMSignInDialog* _signInDialog;
	NSMutableSet* _shownAlerts;
	long long _appleConnectState;

}

@property (nonatomic,retain) ACMSignInDialog * signInDialog;              //@synthesize signInDialog=_signInDialog - In the implementation block
@property (nonatomic,retain) NSMutableSet * shownAlerts;                  //@synthesize shownAlerts=_shownAlerts - In the implementation block
@property (assign,nonatomic) long long appleConnectState;                 //@synthesize appleConnectState=_appleConnectState - In the implementation block
+(void)initialize;
-(int)logLevel;
-(void)setLogLevel:(int)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(id)parentViewController;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)cancelRequests;
-(void)reportError:(id)arg1 ;
-(id)authenticationRequest;
-(void)authenticateWithRequest:(id)arg1 password:(id)arg2 ;
-(bool)shouldReleaseOnMemoryWarning;
-(id)initWithMasterObject:(id)arg1 ;
-(id)hideAppleConnectSignInDialog;
-(void)verifyServiceTicket:(id)arg1 ;
-(void)onIForgot:(id)arg1 ;
-(void)setShownAlerts:(id)arg1 ;
-(void)setAppleConnectState:(long long)arg1 ;
-(id)signInDialog;
-(void)setSignInDialog:(id)arg1 ;
-(long long)appleConnectState;
-(void)hideSignIn;
-(bool)signInAnimated;
-(void)showSignIn;
-(void)returnError:(id)arg1 withSelector:(SEL)arg2 withResponseClass:(Class)arg3 ;
-(void)sendAuthenticationRequest:(id)arg1 password:(id)arg2 ;
-(void)returnServiceTicket:(id)arg1 ;
-(void)returnResponse:(id)arg1 withSelector:(SEL)arg2 ;
-(id)shownAlerts;
-(void)onSignIn:(id)arg1 withPassword:(id)arg2 ;
-(void)onSignInCancel:(id)arg1 ;
-(Class)settingsClass;
-(Class)provisionManagerClass;
-(void)authenticateRunningOnMainThreadWithRequest:(id)arg1 ;
-(void)signInDialogWillBecomeEnabled;
-(void)signInDialogDidBecomeEnabled;
-(void)signInDialogWillBecomeDisabled;
-(void)signInDialogDidBecomeDisabled;
@end

