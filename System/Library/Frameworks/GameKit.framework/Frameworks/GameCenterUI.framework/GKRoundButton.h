/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:35 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKButton.h>

@class UIImage;

@interface GKRoundButton : GKButton

@property (nonatomic,retain) UIImage * backgroundImage; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tintColorDidChange;
-(id)backgroundImage;
-(void)setBackgroundImage:(id)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(CGRect)_highlightBounds;
@end

