/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol ABPopoverRepresentDelegate;
@class UIView, UIResponder, UIBarButtonItem, UIPopoverController, UIActionSheet, UIWindow;

@interface ABPopoverManager : NSObject <UIPopoverControllerDelegate, UIActionSheetDelegate> {

	UIView* _autorotateView;
	UIResponder* _autorotateResponder;
	UIBarButtonItem* _autorotateBarButtonItem;
	unsigned long long _autorotateDirections;
	UIPopoverController* _autorotatePopoverController;
	UIActionSheet* _autorotateActionSheet;
	<ABPopoverRepresentDelegate>* _representDelegate;
	id _realDelegate;
	bool _rotating;

}

@property (nonatomic,retain) UIView * autorotateView;                                        //@synthesize autorotateView=_autorotateView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * autorotateBarButtonItem;                      //@synthesize autorotateBarButtonItem=_autorotateBarButtonItem - In the implementation block
@property (assign,nonatomic) unsigned long long autorotateDirrections;                       //@synthesize autorotateDirections=_autorotateDirections - In the implementation block
@property (nonatomic,retain) UIPopoverController * autorotatePopoverController;              //@synthesize autorotatePopoverController=_autorotatePopoverController - In the implementation block
@property (nonatomic,retain) UIActionSheet * autorotateActionSheet;                          //@synthesize autorotateActionSheet=_autorotateActionSheet - In the implementation block
@property (nonatomic,retain) <ABPopoverRepresentDelegate> * representDelegate;               //@synthesize representDelegate=_representDelegate - In the implementation block
@property (nonatomic,retain) id realDelegate;                                                //@synthesize realDelegate=_realDelegate - In the implementation block
@property (nonatomic,readonly) UIWindow * observedWindow; 
@property (nonatomic,retain) UIResponder * autorotateResponder;                              //@synthesize autorotateResponder=_autorotateResponder - In the implementation block
+(void)popoverController:(id)arg1 dismissPopoverAnimated:(bool)arg2 ;
+(void)popoverController:(id)arg1 presentPopoverFromView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(bool)arg4 representDelegate:(id)arg5 ;
+(void)stopAutorotatePresenter:(id)arg1 ;
+(void)actionSheet:(id)arg1 showFromView:(id)arg2 animated:(bool)arg3 direction:(unsigned long long)arg4 autorotate:(bool)arg5 ;
+(void)actionSheet:(id)arg1 showFromBarButtonItem:(id)arg2 animated:(bool)arg3 autorotate:(bool)arg4 ;
+(void)actionSheet:(id)arg1 showFromView:(id)arg2 animated:(bool)arg3 autorotate:(bool)arg4 ;
+(void)actionSheet:(id)arg1 showFromRect:(CGRect)arg2 inView:(id)arg3 animated:(bool)arg4 direction:(unsigned long long)arg5 autorotate:(bool)arg6 ;
+(bool)resignFirstResponderIfNeeded;
+(void)actionSheet:(id)arg1 showFromRect:(CGRect)arg2 inView:(id)arg3 direction:(unsigned long long)arg4 animated:(bool)arg5 ;
+(id)managerForPresenter:(id)arg1 ;
+(void)actionSheet:(id)arg1 showFromBarButtonItem:(id)arg2 animated:(bool)arg3 ;
+(void)removeManagerForPresenter:(id)arg1 ;
+(void)popoverController:(id)arg1 presentPopoverFromRect:(CGRect)arg2 inView:(id)arg3 permittedArrowDirections:(unsigned long long)arg4 animated:(bool)arg5 ;
+(void)actionSheet:(id)arg1 showFromRect:(CGRect)arg2 inView:(id)arg3 animated:(bool)arg4 ;
+(void)actionSheet:(id)arg1 dismissWithClickedButtonIndex:(long long)arg2 animated:(bool)arg3 ;
+(void)dismissPopoverForActionSheet:(id)arg1 ;
-(id)autorotatePopoverController;
-(id)autorotateView;
-(unsigned long long)autorotateDirrections;
-(void)setAutorotateResponder:(id)arg1 ;
-(id)autorotateResponder;
-(id)representDelegate;
-(id)observedWindow;
-(id)autorotateBarButtonItem;
-(void)stopAutorotate;
-(void)setRealDelegate:(id)arg1 ;
-(void)setAutorotateView:(id)arg1 ;
-(void)setAutorotateDirrections:(unsigned long long)arg1 ;
-(void)setAutorotatePopoverController:(id)arg1 ;
-(void)setRepresentDelegate:(id)arg1 ;
-(void)startObservingRotationOfWindow:(id)arg1 ;
-(id)delegateOwner;
-(id)realDelegate;
-(void)stopObservingRotation;
-(void)revertDelegate;
-(void)setAutorotateBarButtonItem:(id)arg1 ;
-(void)setAutorotateActionSheet:(id)arg1 ;
-(void)startAutorotateActionSheet:(id)arg1 fromView:(id)arg2 ;
-(void)startAutorotateActionSheet:(id)arg1 fromBarButtonItem:(id)arg2 ;
-(void)startAutorotatePopoverController:(id)arg1 showFromView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 representDelegate:(id)arg4 ;
-(id)autorotateActionSheet;
-(void)dealloc;
-(bool)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(bool)autorotates;
-(void)keyboardDidShow:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)keyboardDidHide:(id)arg1 ;
-(void)windowDidRotate:(id)arg1 ;
-(void)windowWillRotate:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
@end

