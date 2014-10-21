/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerElement.h>

@interface GCControllerButtonInput : GCControllerElement

@property (copy) id valueChangedHandler; 
@property (readonly) float value; 
@property (getter=isPressed,readonly) bool pressed; 
-(bool)setHIDValue:(IOHIDValueRef)arg1 ;
-(bool)isPressed;
-(/*^block*/ id)valueChangedHandler;
-(void)setValueChangedHandler:(/*^block*/ id)arg1 ;
-(float)value;
-(bool)_setValue:(float)arg1 ;
@end

