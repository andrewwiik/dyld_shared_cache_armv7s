/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@protocol UIWebTouchEventsGestureRecognizerDelegate;
@class NSMutableArray;

@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer {

	id _touchTarget;
	SEL _touchAction;
	<UIWebTouchEventsGestureRecognizerDelegate>* _webTouchDelegate;
	unsigned _passedHitTest : 1;
	unsigned _defaultPrevented : 1;
	unsigned _inJavaScriptGesture : 1;
	unsigned _type : 2;
	double _originalGestureDistance;
	double _originalGestureAngle;
	CGPoint _locationInWindow;
	NSMutableArray* _touchLocations;
	NSMutableArray* _touchIdentifiers;
	NSMutableArray* _touchPhases;
	double _scale;
	double _rotation;

}

@property (assign,getter=isDefaultPrevented,nonatomic) bool defaultPrevented;              //@synthesize defaultPrevented=_defaultPrevented - In the implementation block
@property (nonatomic,readonly) int type;                                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CGPoint locationInWindow;                                   //@synthesize locationInWindow=_locationInWindow - In the implementation block
@property (nonatomic,retain) NSMutableArray * touchLocations;                              //@synthesize touchLocations=_touchLocations - In the implementation block
@property (nonatomic,retain) NSMutableArray * touchIdentifiers;                            //@synthesize touchIdentifiers=_touchIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * touchPhases;                                 //@synthesize touchPhases=_touchPhases - In the implementation block
@property (nonatomic,readonly) bool inJavaScriptGesture;                                   //@synthesize inJavaScriptGesture=_inJavaScriptGesture - In the implementation block
@property (nonatomic,readonly) double scale;                                               //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) double rotation;                                            //@synthesize rotation=_rotation - In the implementation block
-(void)dealloc;
-(id)description;
-(double)scale;
-(int)type;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(bool)canBePreventedByGestureRecognizer:(id)arg1 ;
-(double)rotation;
-(void)setTouchLocations:(id)arg1 ;
-(void)setTouchIdentifiers:(id)arg1 ;
-(void)setTouchPhases:(id)arg1 ;
-(id)_phaseDescription:(long long)arg1 ;
-(id)_typeDescription;
-(id)_locationsDescription;
-(id)_identifiersDescription;
-(id)_phasesDescription;
-(void)_reset;
-(void)_resetGestureRecognizer;
-(unsigned)_getNextTouchIdentifier;
-(void)_recordTouches:(id)arg1 type:(int)arg2 ;
-(void)_processTouches:(id)arg1 withEvent:(id)arg2 type:(int)arg3 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 touchDelegate:(id)arg3 ;
-(id).cxx_construct;
-(bool)isDefaultPrevented;
-(void)setDefaultPrevented:(bool)arg1 ;
-(CGPoint)locationInWindow;
-(id)touchLocations;
-(id)touchIdentifiers;
-(id)touchPhases;
-(bool)inJavaScriptGesture;
@end

