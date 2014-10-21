/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:16 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIView, UIImage;

@interface PUMultiOrientationImageView : UIView {

	NSArray* _orientedSubviews;
	UIView* _currentOrientedSubview;
	bool _allowsEdgeAntialiasing;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;                          //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) bool allowsEdgeAntialiasing;              //@synthesize allowsEdgeAntialiasing=_allowsEdgeAntialiasing - In the implementation block
-(void)setImage:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(id)image;
-(void).cxx_destruct;
-(void)setAllowsEdgeAntialiasing:(bool)arg1 ;
-(bool)allowsEdgeAntialiasing;
-(void)_updateLayout;
-(void)_updateSubviews;
@end
