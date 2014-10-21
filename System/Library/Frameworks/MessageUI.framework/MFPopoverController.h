/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIPopoverController.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@interface MFPopoverController : UIPopoverController <UIPopoverControllerDelegate> {

	id _mailDelegate;
	id _mailPopoverManager;
	bool _isRotating;

}

@property (assign,nonatomic) <MFMailPopoverManagerDelegate> * mailDelegate;              //@synthesize mailDelegate=_mailDelegate - In the implementation block
@property (assign,nonatomic) id mailPopoverManager;                                      //@synthesize mailPopoverManager=_mailPopoverManager - In the implementation block
@property (assign,nonatomic) bool isRotating;                                            //@synthesize isRotating=_isRotating - In the implementation block
-(void)setMailPopoverManager:(id)arg1 ;
-(void)setMailDelegate:(id)arg1 ;
-(id)mailDelegate;
-(void)setIsRotating:(bool)arg1 ;
-(id)mailPopoverManager;
-(void)dealloc;
-(bool)isRotating;
-(void)dismissPopoverAnimated:(bool)arg1 ;
-(id)initWithContentViewController:(id)arg1 ;
-(void)popoverController:(id)arg1 animationCompleted:(long long)arg2 ;
-(bool)popoverControllerShouldDismissPopover:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
@end

