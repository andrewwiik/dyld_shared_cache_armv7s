/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBDeviceLockTitle.h>

@class UILabel;

@interface SBDeviceLockTitleWildcatKeypad : SBDeviceLockTitle {

	bool _highlighted;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)setHighlighted:(bool)arg1 ;
-(bool)isHighlighted;
-(id)_backgroundImage;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(id)_initWithStyle:(int)arg1 interfaceOrientation:(long long)arg2 ;
-(void)blinkSubtitle;
@end

