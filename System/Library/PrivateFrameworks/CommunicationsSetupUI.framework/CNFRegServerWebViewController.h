/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:49 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <CommunicationsSetupUI/RUIObjectModelDelegate.h>

@class CNFRegController, CNFRegLoadingView, UIAlertView, NSTimer, RUILoader, NSMutableArray, UIWebView;

@interface CNFRegServerWebViewController : UIViewController <UIWebViewDelegate, UIAlertViewDelegate, RUIObjectModelDelegate> {

	CNFRegController* _regController;
	CNFRegLoadingView* _loadingView;
	UIAlertView* _alert;
	/*^block*/ id _alertHandler;
	NSTimer* _timeoutTimer;
	RUILoader* _loader;
	NSMutableArray* _objectModels;
	struct {
		unsigned isLoading : 1;
		unsigned isLoaded : 1;
		unsigned wantsWifi : 1;
		unsigned modifiedWiFi : 1;
		unsigned automaticKeyboardWasDisabled : 1;
		unsigned checkedLogState : 1;
		unsigned shouldLog : 1;
		unsigned timedOut;
	}  _webControllerFlags;
	UIWebView* _webView;

}

@property (nonatomic,retain) CNFRegController * regController;              //@synthesize regController=_regController - In the implementation block
@property (nonatomic,@dynamic,readonly) bool isLoaded; 
@property (nonatomic,@dynamic,readonly) bool isLoading; 
@property (nonatomic,@dynamic,readonly) bool timedOut; 
@property (nonatomic,retain) UIWebView * webView;                           //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) UIAlertView * alert;                           //@synthesize alert=_alert - In the implementation block
@property (nonatomic,copy) id alertHandler;                                 //@synthesize alertHandler=_alertHandler - In the implementation block
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModelDidChange:(id)arg1 ;
-(void)setAlert:(id)arg1 ;
-(id)alert;
-(void)dealloc;
-(id)init;
-(void)applicationWillSuspend;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(id)webView;
-(void)setWebView:(id)arg1 ;
-(bool)isLoading;
-(bool)isLoaded;
-(void)setAlertHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)alertHandler;
-(id)regController;
-(void)setRegController:(id)arg1 ;
-(id)initWithRegController:(id)arg1 ;
-(id)logName;
-(void)startRequiringWifi;
-(void)stopRequiringWifi;
-(void)_stopTimeout;
-(bool)_shouldLog;
-(void)showSpinner;
-(id)overrideURLForURL:(id)arg1 ;
-(bool)shouldSetHeadersForRequest:(id)arg1 ;
-(void)setHeadersForRequest:(id)arg1 ;
-(bool)canSendURLRequest:(id)arg1 ;
-(void)hideSpinner;
-(void)_handleTimeout;
-(void)_cleanupLoader;
-(void)_popObjectModelAnimated:(bool)arg1 ;
-(void)receivedStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(void)cancelButtonPressed:(id)arg1 ;
-(void)_timeoutFired:(id)arg1 ;
-(void)setWantsWifi:(bool)arg1 ;
-(void)loadURL:(id)arg1 ;
-(void)_startTimeoutWithDuration:(double)arg1 ;
-(bool)timedOut;
@end

