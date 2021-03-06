/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:26 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <MediaPlayerUI/MPUStackItemView.h>

@class _MPUBorderView, UIImageView, UIColor, UIImage;

@interface MPUStandardImageStackItemView : MPUStackItemView {

	_MPUBorderView* _borderView;
	UIImageView* _imageView;
	double _dropShadowAlpha;
	UIColor* _dropShadowColor;
	unsigned long long _dropShadowEdges;
	double _dropShadowWidth;
	UIImage* _image;
	double _imageAlpha;
	double _overlayBorderWidth;
	double _overlayBorderAlpha;
	UIColor* _overlayBorderColor;
	double _overlayCenterAlpha;
	UIColor* _overlayCenterColor;
	CGRect _imageContentsRect;
	CGAffineTransform _imageTransform;

}

@property (assign,nonatomic) double dropShadowAlpha;                          //@synthesize dropShadowAlpha=_dropShadowAlpha - In the implementation block
@property (nonatomic,retain) UIColor * dropShadowColor;                       //@synthesize dropShadowColor=_dropShadowColor - In the implementation block
@property (assign,nonatomic) unsigned long long dropShadowEdges;              //@synthesize dropShadowEdges=_dropShadowEdges - In the implementation block
@property (assign,nonatomic) double dropShadowWidth;                          //@synthesize dropShadowWidth=_dropShadowWidth - In the implementation block
@property (nonatomic,retain) UIImage * image;                                 //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) double imageAlpha;                               //@synthesize imageAlpha=_imageAlpha - In the implementation block
@property (assign,nonatomic) CGRect imageContentsRect;                        //@synthesize imageContentsRect=_imageContentsRect - In the implementation block
@property (assign,nonatomic) CGAffineTransform imageTransform;                //@synthesize imageTransform=_imageTransform - In the implementation block
@property (assign,nonatomic) double overlayBorderWidth;                       //@synthesize overlayBorderWidth=_overlayBorderWidth - In the implementation block
@property (assign,nonatomic) double overlayBorderAlpha;                       //@synthesize overlayBorderAlpha=_overlayBorderAlpha - In the implementation block
@property (nonatomic,retain) UIColor * overlayBorderColor;                    //@synthesize overlayBorderColor=_overlayBorderColor - In the implementation block
@property (assign,nonatomic) double overlayCenterAlpha;                       //@synthesize overlayCenterAlpha=_overlayCenterAlpha - In the implementation block
@property (nonatomic,retain) UIColor * overlayCenterColor;                    //@synthesize overlayCenterColor=_overlayCenterColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)image;
-(void).cxx_destruct;
-(void)setDropShadowAlpha:(double)arg1 ;
-(void)_updateForBorderViewChange;
-(double)dropShadowAlpha;
-(unsigned long long)dropShadowEdges;
-(double)dropShadowWidth;
-(double)imageAlpha;
-(CGRect)imageContentsRect;
-(double)overlayBorderWidth;
-(double)overlayBorderAlpha;
-(id)overlayBorderColor;
-(double)overlayCenterAlpha;
-(id)overlayCenterColor;
-(void)setOverlayCenterAlpha:(double)arg1 ;
-(void)setOverlayBorderAlpha:(double)arg1 ;
-(void)setOverlayBorderWidth:(double)arg1 ;
-(void)setOverlayBorderColor:(id)arg1 ;
-(void)setOverlayCenterColor:(id)arg1 ;
-(void)setImageAlpha:(double)arg1 ;
-(void)setImageContentsRect:(CGRect)arg1 ;
-(void)setDropShadowEdges:(unsigned long long)arg1 ;
-(void)setDropShadowWidth:(double)arg1 ;
-(void)setImageTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)imageTransform;
-(id)dropShadowColor;
-(void)setDropShadowColor:(id)arg1 ;
@end

