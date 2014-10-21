/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:52 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UITextField.h>

@class UIView;

@interface SKUIRedeemTextField : UITextField {

	UIView* _bottomBorderView;
	UIView* _topBorderView;
	UIView* _backdropView;
	bool _backdropBackground;

}

@property (assign,nonatomic) bool backdropBackground;              //@synthesize backdropBackground=_backdropBackground - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(void).cxx_destruct;
-(void)setBackdropBackground:(bool)arg1 ;
-(bool)backdropBackground;
@end

