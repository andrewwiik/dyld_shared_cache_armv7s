/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:15 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class PUPhotoStreamRecipientViewController, UIBarButtonItem, PLCloudSharedAlbum;

@interface PUAddSubscribersViewController : UIViewController <UIAlertViewDelegate> {

	PUPhotoStreamRecipientViewController* _composeRecipientController;
	UIBarButtonItem* _addButton;
	PLCloudSharedAlbum* _album;

}

@property (nonatomic,readonly) PLCloudSharedAlbum * album;              //@synthesize album=_album - In the implementation block
-(void)dealloc;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void).cxx_destruct;
-(void)_dismiss;
-(id)album;
-(bool)_validateRecipientsToAdd:(id)arg1 ;
-(void)_cancelButtonHandler;
-(void)_addButtonHandler;
-(void)_saveAndDismiss;
-(id)initWithSharedStream:(id)arg1 ;
-(id)backingNavigationControllerForComposeRecipientViewController:(id)arg1 ;
-(void)recipientViewControllerDidAddRecipient:(id)arg1 ;
-(void)recipientViewControllerDidRemoveRecipient:(id)arg1 ;
-(void)recipientViewController:(id)arg1 didEnterText:(id)arg2 ;
@end

