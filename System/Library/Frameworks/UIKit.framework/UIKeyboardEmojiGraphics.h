/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIKeyboardEmojiGraphics : NSObject {

	CGRect _imageRect;
	UIKBThemeRef _categoryTheme;
	UIKBThemeRef _categorySelectedTheme;
	UIKBThemeRef _controlTheme;
	UIKBThemeRef _controlPressedTheme;
	UIKBThemeRef _dividerTheme;
	UIKBThemeRef _darkDividerTheme;
	UIKBThemeRef _selectedDividerTheme;
	UIKBThemeRef _backgroundTheme;
	CGColorRef _selectedDividerStart;
	CGColorRef _symbolColor;
	CGGradientRef _darkDividerGradient;
	CGGradientRef _selectedGradient;
	CGGradientRef _selectedDividerGradient;
	CGGradientRef _backgroundGradient;

}
+(id)sharedInstance;
+(id)emojiFontAttributes;
+(unsigned char)rowCount:(bool)arg1 ;
+(unsigned char)colCount:(bool)arg1 ;
+(CGPoint)padding:(bool)arg1 ;
+(CGSize)emojiSize:(bool)arg1 ;
+(CGPoint)margin:(bool)arg1 ;
+(id)imageWithRect:(CGRect)arg1 name:(id)arg2 pressed:(bool)arg3 ;
+(id)pressIndicatorViewWithFrame:(CGRect)arg1 whiteKeyboard:(bool)arg2 ;
+(double)emojiPageControlYOffset:(bool)arg1 ;
+(double)optionalDescriptionPadding:(bool)arg1 ;
+(bool)boldText;
+(bool)isLandscape;
+(id)emojiFontAttributesForPortrait:(bool)arg1 ;
-(void)dealloc;
-(id)init;
-(void)initializeThemes;
-(void)releaseThemes;
-(id)generateImageWithRect:(CGRect)arg1 name:(id)arg2 pressed:(bool)arg3 ;
-(void)drawTopEdgeInContext:(CGContextRef)arg1 withTheme:(UIKBThemeRef)arg2 ;
-(id)dividerWithTheme:(UIKBThemeRef)arg1 ;
-(id)categoryWithSymbol:(id)arg1 pressed:(id)arg2 ;
-(id)pageIndicatorGenerator:(id)arg1 ;
-(id)protoKeyWithDisplayString:(id)arg1 ;
-(id)protoKeyboard;
-(UIKBThemeRef)createProtoThemeForKey:(id)arg1 keyboard:(id)arg2 state:(int)arg3 ;
-(id)keyImageWithDisplayString:(id)arg1 state:(int)arg2 rect:(CGRect)arg3 fontSize:(double)arg4 offset:(CGPoint)arg5 ;
-(id)dividerGenerator:(id)arg1 ;
-(id)darkDividerGenerator:(id)arg1 ;
-(id)selectedDividerGenerator:(id)arg1 ;
-(id)categoryRecentsGenerator:(id)arg1 ;
-(id)categoryPeopleGenerator:(id)arg1 ;
-(id)categoryNatureGenerator:(id)arg1 ;
-(id)categoryObjectsGenerator:(id)arg1 ;
-(id)categoryPlacesGenerator:(id)arg1 ;
-(id)categorySymbolsGenerator:(id)arg1 ;
-(id)pageIndicatorCurrentGenerator:(id)arg1 ;
-(id)backgroundGradientGenerator:(id)arg1 ;
-(id)emojiPressedGenerator:(id)arg1 rect:(CGRect)arg2 ;
-(id)keyImageWithDisplayString:(id)arg1 state:(int)arg2 rect:(CGRect)arg3 fontSize:(double)arg4 ;
-(id)categoryKeyGenerator:(bool)arg1 rect:(CGRect)arg2 ;
@end

