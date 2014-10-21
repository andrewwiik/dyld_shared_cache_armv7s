/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIActionSheet.h>

@protocol _UIRotatingActionSheetDelegate, UIActionSheetDelegate;
@interface _UIRotatingActionSheet : UIActionSheet {

	<_UIRotatingActionSheetDelegate>* _rotatingSheetDelegate;
	<UIActionSheetDelegate>* _delegateWhileRotating;
	unsigned long long _arrowDirections;
	bool _isRotating;

}

@property (assign,nonatomic) <_UIRotatingActionSheetDelegate> * rotatingSheetDelegate;              //@synthesize rotatingSheetDelegate=_rotatingSheetDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long arrowDirections;                                    //@synthesize arrowDirections=_arrowDirections - In the implementation block
-(void)dealloc;
-(id)init;
-(void)willRotate;
-(void)didRotate;
-(void)doneWithSheet;
-(void)setRotatingSheetDelegate:(id)arg1 ;
-(bool)presentSheet;
-(void)setArrowDirections:(unsigned long long)arg1 ;
-(bool)presentSheetFromRect:(CGRect)arg1 ;
-(void)_updateSheetPositionAfterRotation;
-(id)rotatingSheetDelegate;
-(unsigned long long)arrowDirections;
@end

