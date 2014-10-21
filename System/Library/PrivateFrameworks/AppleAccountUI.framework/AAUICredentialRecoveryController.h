/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:38 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/RUIObjectModelDelegate.h>
#import <AppleAccountUI/RUILoaderDelegate.h>

@protocol AAUICredentialRecoveryPresentationDelegate;
@class NSURL, RUILoader, RUIPage, NSMutableArray, UINavigationController, UIViewController, NSObject;

@interface AAUICredentialRecoveryController : NSObject <RUIObjectModelDelegate, RUILoaderDelegate> {

	NSURL* _remoteUIURL;
	RUILoader* _remoteUILoader;
	RUIPage* _loadingPage;
	NSMutableArray* _objectModels;
	UINavigationController* _navigationController;
	UIViewController* _presentationViewController;
	UIViewController* _navigationBaseViewController;
	bool _isModal;
	NSObject<AAUICredentialRecoveryPresentationDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) NSObject<AAUICredentialRecoveryPresentationDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)cancelPresentation;
-(id)initWithRemoteUIURL:(id)arg1 modalPresentation:(bool)arg2 ;
-(void)startPresentation;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void).cxx_destruct;
-(void)_addHeadersToRequest:(id)arg1 ;
-(id)remoteUIURL;
-(void)_createRemoteUIViewControllerFromURL:(id)arg1 ;
-(void)_finishPresentationWithSuccess:(bool)arg1 ;
-(void)_displayConnectionError;
-(void)_cleanupLoader;
-(void)_popObjectModelAnimated:(bool)arg1 ;
-(void)_cancelButtonTapped:(id)arg1 ;
@end

