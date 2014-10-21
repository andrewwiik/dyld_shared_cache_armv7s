/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:00 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface TPLegacyBottomBar : UIView {

	long long _orientation;
	long long _style;
	bool _suppressDrawingBackground;
	UIImageView* _shadowView;

}

@property (assign,nonatomic) bool suppressDrawingBackground;              //@synthesize suppressDrawingBackground=_suppressDrawingBackground - In the implementation block
@property (readonly) UIImageView * shadowView;                            //@synthesize shadowView=_shadowView - In the implementation block
+(double)defaultHeightForOrientation:(long long)arg1 ;
+(double)defaultHeightForStyle:(long long)arg1 ;
+(double)defaultHeight;
+(id)_backgroundImage;
+(long long)fullscreenStyle;
+(double)defaultHeightForStyle:(long long)arg1 orientation:(long long)arg2 ;
+(long long)overlayStyle;
+(id)upsideDownShadowImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(long long)orientation;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(id)shadowView;
-(id)initWithDefaultSize;
-(void)setOrientation:(long long)arg1 ;
-(id)initWithDefaultSizeForOrientation:(long long)arg1 ;
-(void)setWellAlpha:(double)arg1 ;
-(void)setOrientation:(long long)arg1 updateFrame:(bool)arg2 ;
-(bool)suppressDrawingBackground;
-(void)setSuppressDrawingBackground:(bool)arg1 ;
@end

