/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UITouch, UIKBTree;

@interface UIKeyboardTouchInfo : NSObject {

	UITouch* _touch;
	UIKBTree* _key;
	UIKBTree* _keyplane;
	UIKBTree* _slidOffKey;
	CGPoint _initialPoint;
	CGPoint _initialDragPoint;
	bool _dragged;
	int _stage;
	bool _maySuppressUpAction;

}

@property (nonatomic,retain) UITouch * touch;                       //@synthesize touch=_touch - In the implementation block
@property (nonatomic,retain) UIKBTree * key;                        //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) UIKBTree * keyplane;                   //@synthesize keyplane=_keyplane - In the implementation block
@property (nonatomic,retain) UIKBTree * slidOffKey;                 //@synthesize slidOffKey=_slidOffKey - In the implementation block
@property (assign,nonatomic) CGPoint initialPoint;                  //@synthesize initialPoint=_initialPoint - In the implementation block
@property (assign,nonatomic) CGPoint initialDragPoint;              //@synthesize initialDragPoint=_initialDragPoint - In the implementation block
@property (assign,nonatomic) bool dragged;                          //@synthesize dragged=_dragged - In the implementation block
@property (assign,nonatomic) int stage;                             //@synthesize stage=_stage - In the implementation block
@property (assign,nonatomic) bool maySuppressUpAction;              //@synthesize maySuppressUpAction=_maySuppressUpAction - In the implementation block
-(void)dealloc;
-(id)touch;
-(id)key;
-(void)setTouch:(id)arg1 ;
-(void)setKey:(id)arg1 ;
-(void)setKeyplane:(id)arg1 ;
-(void)setSlidOffKey:(id)arg1 ;
-(id)keyplane;
-(id)slidOffKey;
-(CGPoint)initialPoint;
-(void)setInitialPoint:(CGPoint)arg1 ;
-(int)stage;
-(void)setStage:(int)arg1 ;
-(CGPoint)initialDragPoint;
-(void)setInitialDragPoint:(CGPoint)arg1 ;
-(bool)dragged;
-(void)setDragged:(bool)arg1 ;
-(bool)maySuppressUpAction;
-(void)setMaySuppressUpAction:(bool)arg1 ;
@end

