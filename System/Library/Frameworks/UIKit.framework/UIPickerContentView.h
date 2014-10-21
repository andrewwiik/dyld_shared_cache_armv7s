/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface UIPickerContentView : UIView {

	UILabel* _titleLabel;
	UIImageView* _checkView;
	struct {
		unsigned checked : 1;
		unsigned highlighted : 1;
	}  _pickerContentViewFlags;

}

@property (assign,getter=isChecked,nonatomic) bool checked; 
@property (nonatomic,readonly) UILabel * titleLabel; 
+(double)_checkmarkOffset;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setChecked:(bool)arg1 ;
-(id)titleLabel;
-(void)setHighlighted:(bool)arg1 ;
-(bool)isHighlighted;
-(bool)_isSelectable;
-(double)labelWidthForBounds:(CGRect)arg1 ;
-(bool)isChecked;
-(id)checkedColor;
@end

