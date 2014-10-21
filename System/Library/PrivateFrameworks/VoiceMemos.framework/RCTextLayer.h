/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString, UIFont, UIColor;

@interface RCTextLayer : CALayer {

	CGSize _cachedSize;
	unsigned long long _cachedSizeHash;
	NSString* _text;
	UIFont* _font;
	UIColor* _textColor;
	long long _preferredAlignment;
	long long _textAlignment;

}

@property (nonatomic,copy) NSString * text;                             //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIFont * font;                             //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                       //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) long long preferredAlignment;              //@synthesize preferredAlignment=_preferredAlignment - In the implementation block
@property (assign,nonatomic) long long textAlignment;                   //@synthesize textAlignment=_textAlignment - In the implementation block
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)sizeToFit;
-(id)font;
-(id)textColor;
-(long long)textAlignment;
-(void).cxx_destruct;
-(id)_attributes;
-(void)setPreferredAlignment:(long long)arg1 ;
-(long long)preferredAlignment;
-(CGRect)textRectWithAlignment:(long long)arg1 inLayoutBounds:(CGRect)arg2 ;
-(CGSize)_displaySize;
-(void)drawInContext:(CGContextRef)arg1 ;
@end
