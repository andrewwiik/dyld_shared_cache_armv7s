/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIEvent : NSObject {

	double _timestamp;

}

@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long subtype; 
@property (nonatomic,readonly) double timestamp; 
-(id)_screen;
-(id)_init;
-(id)_windows;
-(void)_sendEventToResponder:(id)arg1 ;
-(double)_wheelVelocity;
-(void)_setTimestamp:(double)arg1 ;
-(bool)isKeyDown;
-(id)_allPhysicalButtons;
-(GSEventRef)_gsEvent;
-(bool)_isKeyDown;
-(IOHIDEventRef)_hidEvent;
-(long long)_moveDirection;
-(long long)_modifierFlags;
-(id)_modifiedInput;
-(id)_unmodifiedInput;
-(id)_initWithEvent:(GSEventRef)arg1 touches:(id)arg2 ;
-(id)_touchesForGestureRecognizer:(id)arg1 ;
-(int)_shakeState;
-(id)_physicalButtonsForWindow:(id)arg1 ;
-(id)_physicalButtonsForResponder:(id)arg1 ;
-(id)_physicalButtonsForGestureRecognizer:(id)arg1 ;
-(id)_triggeringPhysicalButton;
-(double)timestamp;
-(long long)type;
-(id)touchesForGestureRecognizer:(id)arg1 ;
-(id)allTouches;
-(long long)subtype;
-(id)touchesForWindow:(id)arg1 ;
-(id)touchesForView:(id)arg1 ;
@end

