/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:38 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/RUIObjectModelDelegate.h>

@protocol AAUIAccountCreationDelegate;
@class RUILoader, NSMutableArray, UINavigationController, UIAlertView, AASetupAssistantService, AAAutoAccountVerifier;

@interface AAUIAccountCreationRemoteUI : NSObject <RUIObjectModelDelegate> {

	bool _isModal;
	RUILoader* _loader;
	NSMutableArray* _objectModels;
	<AAUIAccountCreationDelegate>* _delegate;
	UINavigationController* _parentNavController;
	UINavigationController* _createAccountNavController;
	UIAlertView* _tcConfirmationAlert;
	UIAlertView* _failedToCreateAccountAlert;
	bool _over13;
	AASetupAssistantService* _aaService;
	AAAutoAccountVerifier* _verifier;

}
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModelDidChange:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void).cxx_destruct;
-(void)_addHeadersToRequest:(id)arg1 ;
-(void)_displayConnectionErrorAndDismiss;
-(void)_createAppleAccount;
-(void)_cleanupCreateAppleID:(id)arg1 ;
-(void)_userAgreedToTCs:(bool)arg1 ;
-(id)initWithNavController:(id)arg1 isModal:(bool)arg2 ;
-(void)_cleanupLoader;
-(void)_popObjectModelAnimated:(bool)arg1 ;
-(void)loadURLRequest:(id)arg1 ;
@end
