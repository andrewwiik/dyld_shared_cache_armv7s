/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIColor, UIImage;

@interface ABTransportButton : UIButton {

	long long _transportType;
	UIColor* _glyphColor;
	UIImage* _image;

}

@property (assign,nonatomic) long long transportType;              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) UIColor * glyphColor;                 //@synthesize glyphColor=_glyphColor - In the implementation block
@property (nonatomic,retain) UIImage * image;                      //@synthesize image=_image - In the implementation block
+(id)transportButton;
-(void)setGlyphColor:(id)arg1 ;
-(void)_updateImageWithType:(long long)arg1 ;
-(id)_imageNameForType:(long long)arg1 ;
-(id)glyphColor;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(id)image;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(CGRect)backgroundRectForBounds:(CGRect)arg1 ;
-(void)setTransportType:(long long)arg1 ;
-(long long)transportType;
@end
