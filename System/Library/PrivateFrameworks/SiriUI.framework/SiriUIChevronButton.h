/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView, SiriUIKeyline, UIView;

@interface SiriUIChevronButton : UIButton {

	UIImageView* _chevronImageView;
	SiriUIKeyline* _keyline;
	bool _hasChevron;
	UIView* _subview;
	double _chevronRightInset;
	double _leftSubviewInset;
	long long _keylineType;

}

@property (nonatomic,retain) UIView * subview;                      //@synthesize subview=_subview - In the implementation block
@property (assign,nonatomic) double chevronRightInset;              //@synthesize chevronRightInset=_chevronRightInset - In the implementation block
@property (assign,nonatomic) double leftSubviewInset;               //@synthesize leftSubviewInset=_leftSubviewInset - In the implementation block
@property (assign,nonatomic) long long keylineType;                 //@synthesize keylineType=_keylineType - In the implementation block
@property (assign,nonatomic) bool hasChevron;                       //@synthesize hasChevron=_hasChevron - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(bool)arg1 ;
-(void).cxx_destruct;
-(void)setKeylineType:(long long)arg1 ;
-(void)setHasChevron:(bool)arg1 ;
-(long long)keylineType;
-(bool)hasChevron;
-(double)chevronRightInset;
-(double)leftSubviewInset;
-(void)setSubview:(id)arg1 ;
-(id)subview;
-(void)setChevronRightInset:(double)arg1 ;
-(void)setLeftSubviewInset:(double)arg1 ;
@end

