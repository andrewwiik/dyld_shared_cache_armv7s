/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImageView;

@interface _MKCalloutBackgroundMaskView : UIView {

	UIView* _baseView;
	UIImageView* _topArrow;
	UIImageView* _bottomArrow;
	UIImageView* _leftArrow;
	UIImageView* _rightArrow;
	UIView* _currentArrowContainer;

}

@property (nonatomic,readonly) UIView * baseView;                           //@synthesize baseView=_baseView - In the implementation block
@property (nonatomic,readonly) UIImageView * topArrow;                      //@synthesize topArrow=_topArrow - In the implementation block
@property (nonatomic,readonly) UIImageView * bottomArrow;                   //@synthesize bottomArrow=_bottomArrow - In the implementation block
@property (nonatomic,readonly) UIImageView * leftArrow;                     //@synthesize leftArrow=_leftArrow - In the implementation block
@property (nonatomic,readonly) UIImageView * rightArrow;                    //@synthesize rightArrow=_rightArrow - In the implementation block
@property (nonatomic,readonly) UIView * currentArrowContainer;              //@synthesize currentArrowContainer=_currentArrowContainer - In the implementation block
-(void)_setupViews;
-(id)baseView;
-(id)currentArrowContainer;
-(void)_removeArrows;
-(id)bottomArrow;
-(id)leftArrow;
-(id)rightArrow;
-(id)topArrow;
-(id)initWithFrame:(CGRect)arg1 ;
-(void).cxx_destruct;
@end
