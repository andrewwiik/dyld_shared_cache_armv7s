/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:35 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKImageBrush.h>

@class UIImage;

@interface GKPhotoBrush : GKImageBrush {

	bool _flipHorizontal;
	UIImage* _overlayImage;
	double _rotation;
	UIEdgeInsets _edgeInsets;
	CGRect _contentRect;

}

@property (nonatomic,retain) UIImage * overlayImage;               //@synthesize overlayImage=_overlayImage - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) CGRect contentRect;                   //@synthesize contentRect=_contentRect - In the implementation block
@property (assign,nonatomic) double rotation;                      //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic) bool flipHorizontal;                  //@synthesize flipHorizontal=_flipHorizontal - In the implementation block
-(CGSize)sizeForInput:(id)arg1 ;
-(void)drawInRect:(CGRect)arg1 withContext:(CGContextRef)arg2 input:(id)arg3 ;
-(double)scaleForInput:(id)arg1 ;
-(id)overlayImage;
-(void)setOverlayImage:(id)arg1 ;
-(bool)flipHorizontal;
-(void)setFlipHorizontal:(bool)arg1 ;
-(void)dealloc;
-(UIEdgeInsets)edgeInsets;
-(CGRect)contentRect;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(void)setContentRect:(CGRect)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
@end

