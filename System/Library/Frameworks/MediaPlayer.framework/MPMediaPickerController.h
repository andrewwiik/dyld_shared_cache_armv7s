/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol MPMediaPickerControllerDelegate;
@class _UIAsyncInvocation, MPRemoteMediaPickerController, UIPopoverController, NSString;

@interface MPMediaPickerController : UIViewController {

	_UIAsyncInvocation* _cancelRequest;
	id _modalContext;
	MPRemoteMediaPickerController* _remoteViewController;
	bool _allowsPickingMultipleItems;
	bool _showsCloudItems;
	UIPopoverController* _containingPopover;
	unsigned long long _mediaTypes;
	<MPMediaPickerControllerDelegate>* _delegate;
	NSString* _prompt;

}

@property (nonatomic,readonly) unsigned long long mediaTypes;                                  //@synthesize mediaTypes=_mediaTypes - In the implementation block
@property (assign,nonatomic,__weak) <MPMediaPickerControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) bool allowsPickingMultipleItems; 
@property (assign,nonatomic) bool showsCloudItems; 
@property (nonatomic,copy) NSString * prompt;                                                  //@synthesize prompt=_prompt - In the implementation block
+(void)preheatMediaPicker;
-(id)initWithMediaTypes:(unsigned long long)arg1 ;
-(void)_requestRemoteViewController;
-(void)_sendSettingsToService;
-(void)_pickerDidPickItems:(id)arg1 ;
-(void)_pickerDidCancel;
-(bool)_hasAddedRemoteView;
-(id)_serviceViewControllerProxy;
-(void)_forceDismissal;
-(void)remoteMediaPickerDidPickMediaItems:(id)arg1 ;
-(void)remoteMediaPickerDidCancel;
-(bool)allowsPickingMultipleItems;
-(void)setAllowsPickingMultipleItems:(bool)arg1 ;
-(bool)showsCloudItems;
-(void)setShowsCloudItems:(bool)arg1 ;
-(void)_resetRemoteViewController;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)prompt;
-(void)setPrompt:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(unsigned long long)mediaTypes;
-(void).cxx_destruct;
-(void)_addRemoteView;
@end

