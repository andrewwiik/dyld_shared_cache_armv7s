/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:35 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@protocol GKFriendRequestComposeViewControllerDelegate;
@class GKComposeHostedViewController, NSString;

@interface GKFriendRequestComposeViewController : UINavigationController {

	<GKFriendRequestComposeViewControllerDelegate>* _composeViewDelegateWeak;
	GKComposeHostedViewController* _composeController;
	NSString* _message;
	unsigned long long _recipientCount;

}

@property (assign,nonatomic) <GKFriendRequestComposeViewControllerDelegate> * composeViewDelegate;              //@synthesize composeViewDelegateWeak=_composeViewDelegateWeak - In the implementation block
@property (nonatomic,retain) GKComposeHostedViewController * composeController;                                 //@synthesize composeController=_composeController - In the implementation block
@property (nonatomic,retain) NSString * message;                                                                //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) unsigned long long recipientCount;                                                 //@synthesize recipientCount=_recipientCount - In the implementation block
@property (assign,nonatomic) unsigned rid; 
+(unsigned long long)maxNumberOfRecipients;
+(bool)_preventsAppearanceProxyCustomization;
-(void)addRecipientsWithEmailAddresses:(id)arg1 ;
-(void)addRecipientsWithPlayerIDs:(id)arg1 ;
-(void)sendFinishedMessageToDelegateCancelled:(bool)arg1 ;
-(unsigned)rid;
-(void)setRid:(unsigned)arg1 ;
-(id)composeController;
-(void)prepareForNewRecipients:(id)arg1 ;
-(id)composeViewDelegate;
-(void)setComposeViewDelegate:(id)arg1 ;
-(void)setComposeController:(id)arg1 ;
-(unsigned long long)recipientCount;
-(void)setRecipientCount:(unsigned long long)arg1 ;
-(bool)navigationBarHidden;
-(void)dealloc;
-(id)init;
-(unsigned long long)supportedInterfaceOrientations;
-(id)message;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(bool)shouldAutomaticallyForwardRotationMethods;
-(bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(bool)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)__viewControllerWillBePresented:(bool)arg1 ;
-(void)setMessage:(id)arg1 ;
@end

