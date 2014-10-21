/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKit/UIView.h>

@class UIFont, UIColor, NSArray, NSString;

@interface MCDAndOthersLabel : UIView {

	UIFont* _font;
	UIColor* _textColor;
	NSArray* _items;
	NSString* _separator;
	NSString* _andOthers;
	NSString* _truncatedItemsString;

}

@property (nonatomic,retain) UIFont * font;                       //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                 //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) NSArray * items;                     //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * separator;                //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) NSString * andOthers;                //@synthesize andOthers=_andOthers - In the implementation block
@property (nonatomic,readonly) double actualHeight; 
@property (nonatomic,readonly) double desiredHeight; 
-(void)setSeparator:(id)arg1 ;
-(double)desiredHeight;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)items;
-(void)setItems:(id)arg1 ;
-(id)font;
-(id)textColor;
-(void).cxx_destruct;
-(id)_textAttributes;
-(void)_truncateItemsToFit;
-(long long)_stringDrawingOptions;
-(double)actualHeight;
-(id)andOthers;
-(void)setAndOthers:(id)arg1 ;
-(id)separator;
@end

