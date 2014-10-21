/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIViewController, UIPopoverController;

@interface _UITextServiceSession : NSObject <UIPopoverControllerDelegate> {

	long long _type;
	UIViewController* _modalViewController;
	UIPopoverController* _popoverController;
	bool _isTextEffectsWindow;
	bool _dismissed;
	/*^block*/ id _dismissedHandler;

}

@property (nonatomic,copy) id dismissedHandler;              //@synthesize dismissedHandler=_dismissedHandler - In the implementation block
+(bool)canShowTextServices;
+(id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
-(id)init;
-(id)initWithType:(long long)arg1 ;
-(void)sessionDidDismiss;
-(void)dealloc;
-(void)dismissTextServiceAnimated:(bool)arg1 ;
-(void)setDismissedHandler:(/*^block*/ id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)_endSession;
-(bool)isDisplaying;
-(/*^block*/ id)dismissedHandler;
@end

