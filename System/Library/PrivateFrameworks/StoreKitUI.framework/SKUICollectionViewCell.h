/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:49 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@class UIView, UIColor;

@interface SKUICollectionViewCell : UICollectionViewCell {

	UIView* _bottomBorderView;
	long long _position;
	UIView* _rightBorderView;
	UIColor* _separatorColor;
	bool _showsCellSeparators;

}

@property (assign,nonatomic) bool showsCellSeparators;              //@synthesize showsCellSeparators=_showsCellSeparators - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;              //@synthesize separatorColor=_separatorColor - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(bool)arg1 ;
-(id)separatorColor;
-(void)setSeparatorColor:(id)arg1 ;
-(void)setSelected:(bool)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void).cxx_destruct;
-(void)setShowsCellSeparators:(bool)arg1 ;
-(bool)_showsRightBorder;
-(void)_updateBorderVisibility;
-(bool)showsCellSeparators;
-(void)_setPosition:(long long)arg1 ;
@end
