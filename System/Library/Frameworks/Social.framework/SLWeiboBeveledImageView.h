/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIImageView, UIActivityIndicatorView;

@interface SLWeiboBeveledImageView : UIView {

	bool _hasBevel;
	UIImage* _image;
	UIImageView* _chromeView;
	UIImageView* _previewView;
	UIActivityIndicatorView* _activityView;

}

@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) bool isTranscoding; 
+(id)blankWebpageImage;
-(CGRect)_previewFrame;
-(void)positionPreviewView;
-(id)initWithBevel:(bool)arg1 ;
-(bool)isTranscoding;
-(void)setIsTranscoding:(bool)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)image;
-(void).cxx_destruct;
@end
