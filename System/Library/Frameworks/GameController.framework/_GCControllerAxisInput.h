/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerAxisInput.h>

@class GCControllerButtonInput, GCControllerElement;

@interface _GCControllerAxisInput : GCControllerAxisInput {

	float _value;
	/*^block*/ id _valueChangedHandler;
	GCControllerButtonInput* _positive;
	GCControllerButtonInput* _negative;
	bool _flipped;
	bool _digital;
	GCControllerElement* _collection;

}
-(id)collection;
-(bool)isAnalog;
-(bool)setHIDValue:(IOHIDValueRef)arg1 ;
-(/*^block*/ id)valueChangedHandler;
-(void)setValueChangedHandler:(/*^block*/ id)arg1 ;
-(bool)isDigital;
-(id)positive;
-(id)negative;
-(id)initWithCollection:(id)arg1 flipped:(bool)arg2 digital:(bool)arg3 ;
-(float)value;
-(void).cxx_destruct;
-(bool)isFlipped;
-(bool)_setValue:(float)arg1 ;
@end

