/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBKeyView.h>
#import <UIKit/UIKeyboardEmojiCategoryControl.h>

@class UIKeyboardEmojiCategoryController, UIImage, NSMutableArray;

@interface UIKeyboardEmojiCategoryBar : UIKBKeyView <UIKeyboardEmojiCategoryControl> {

	UIKeyboardEmojiCategoryController* _categoryController;
	int _selected;
	int _total;
	int _dividerTotal;
	UIImage* _darkDivider;
	UIImage* _plainDivider;
	UIImage* _selectedDivider;
	NSMutableArray* _segmentViews;
	NSMutableArray* _dividerViews;

}

@property (@dynamic) long long selectedIndex; 
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)sendActionsForControlEvents:(unsigned long long)arg1 ;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)releaseImagesAndViews;
-(CGRect)frameForDivider:(int)arg1 ;
-(void)setCategory:(id)arg1 ;
@end
