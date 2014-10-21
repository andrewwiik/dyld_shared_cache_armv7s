/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:02 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIBarAppearanceStorage.h>

@class UIImage;

@interface _UIToolbarAppearanceStorage : _UIBarAppearanceStorage {

	UIImage* shadowImage;
	UIImage* topShadowImage;
	bool hidesShadow;
	UIImage* _backgroundImage;
	UIImage* _miniBackgroundImage;
	UIImage* _topBackgroundImage;
	UIImage* _miniTopBackgroundImage;

}

@property (nonatomic,retain) UIImage * backgroundImage;                     //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * miniBackgroundImage;                 //@synthesize miniBackgroundImage=_miniBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * topBackgroundImage;                  //@synthesize topBackgroundImage=_topBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * miniTopBackgroundImage;              //@synthesize miniTopBackgroundImage=_miniTopBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage; 
@property (nonatomic,retain) UIImage * topShadowImage; 
@property (assign,nonatomic) bool hidesShadow; 
+(long long)typicalBarPosition;
-(void)dealloc;
-(id)backgroundImage;
-(id)miniBackgroundImage;
-(bool)hidesShadow;
-(void)setHidesShadow:(bool)arg1 ;
-(id)shadowImage;
-(void)setShadowImage:(id)arg1 ;
-(id)topShadowImage;
-(id)topBackgroundImage;
-(id)miniTopBackgroundImage;
-(void)setTopShadowImage:(id)arg1 ;
-(void)setBackgroundImage:(id)arg1 ;
-(void)setMiniBackgroundImage:(id)arg1 ;
-(void)setTopBackgroundImage:(id)arg1 ;
-(void)setMiniTopBackgroundImage:(id)arg1 ;
@end
