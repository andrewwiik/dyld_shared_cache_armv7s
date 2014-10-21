/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString, UIColor, UIFont;

@interface ABUILabelWithPlaceholder : UIView {

	UILabel* _label;
	bool _isPlaceholderActive;
	NSString* _placeholder;
	NSString* _actualText;
	UIColor* _actualTextColor;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) UIColor * highlightedTextColor; 
@property (assign,nonatomic) UIColor * shadowColor; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) UIFont * font; 
-(void)_setActualTextColor:(id)arg1 ;
-(void)_setActualText:(id)arg1 ;
-(double)labelLeftEdgeInset;
-(CGRect)_labelFrameForBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setShadowColor:(id)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)sizeToFit;
-(CGSize)shadowOffset;
-(id)shadowColor;
-(id)font;
-(id)label;
-(id)textColor;
-(void)setPlaceholder:(id)arg1 ;
-(void)setHighlightedTextColor:(id)arg1 ;
-(id)highlightedTextColor;
-(id)placeholder;
@end

