/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:15 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIImage;

@interface _UILegibilityImageSet : NSObject {

	UIImage* _image;
	UIImage* _shadowImage;

}

@property (nonatomic,retain) UIImage * image;                    //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;              //@synthesize shadowImage=_shadowImage - In the implementation block
+(id)imageFromImage:(id)arg1 withShadowImage:(id)arg2 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)image;
-(id)shadowImage;
-(void)setShadowImage:(id)arg1 ;
-(id)initWithImage:(id)arg1 shadowImage:(id)arg2 ;
@end
