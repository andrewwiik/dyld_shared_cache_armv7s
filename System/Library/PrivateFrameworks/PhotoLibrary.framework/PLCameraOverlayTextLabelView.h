/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIColor;

@interface PLCameraOverlayTextLabelView : UIView {

	NSString* _text;
	double _textSize;
	double _textStrokeWidth;
	UIColor* _textColor;

}

@property (nonatomic,retain) NSString * text;                     //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) double textStrokeWidth;              //@synthesize textStrokeWidth=_textStrokeWidth - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                 //@synthesize textColor=_textColor - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)textColor;
-(id)initWithText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 text:(id)arg2 textSize:(double)arg3 ;
-(id)initWithText:(id)arg1 textSize:(double)arg2 ;
-(double)textStrokeWidth;
-(void)setTextStrokeWidth:(double)arg1 ;
@end

