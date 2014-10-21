/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:02 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIImage, NSMutableDictionary;

@interface _UISegmentedControlAppearanceStorage : NSObject {

	UIImage* _optionsBackgroundImage;
	NSMutableDictionary* _backgroundImages;
	NSMutableDictionary* _miniBackgroundImages;
	NSMutableDictionary* _dividerImages;
	NSMutableDictionary* _miniDividerImages;
	NSMutableDictionary* _textAttributesForState;
	NSMutableDictionary* _backgroundPositionAdjustmentsForBarMetrics;
	NSMutableDictionary* _contentPositionOffsets;
	NSMutableDictionary* _miniContentPositionOffsets;
	bool _legacyDontHighlight;
	bool _legacySuppressOptionsBackground;
	bool _isTiled;
	unsigned long long _leftCapWidth;
	unsigned long long _rightCapWidth;

}

@property (nonatomic,retain) UIImage * optionsBackgroundImage;              //@synthesize optionsBackgroundImage=_optionsBackgroundImage - In the implementation block
-(void)dealloc;
-(id)init;
-(id)textAttributesForState:(unsigned long long)arg1 ;
-(void)setTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)contentPositionOffsetForSegment:(long long)arg1 inMiniBar:(bool)arg2 noFallback:(bool)arg3 ;
-(id)backgroundImageForState:(unsigned long long)arg1 isMini:(bool)arg2 withFallback:(bool)arg3 ;
-(id)anyDividerImageForMini:(bool)arg1 ;
-(id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 isMini:(bool)arg3 withFallback:(bool)arg4 ;
-(void)setContentPositionOffset:(id)arg1 forSegment:(long long)arg2 inMiniBar:(bool)arg3 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(bool)arg3 ;
-(void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 isMini:(bool)arg4 ;
-(void)takeTextAttributesFrom:(SCD_Struct_UI28)arg1 forState:(unsigned long long)arg2 ;
-(bool)wantsTrackingSuppressed;
-(void)setBackgroundPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(double)backgroundPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(id)contentPositionOffsetForSegment:(long long)arg1 inMiniBar:(bool)arg2 ;
-(id)backgroundImageForState:(unsigned long long)arg1 isMini:(bool)arg2 ;
-(id)anyDividerImage;
-(id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 isMini:(bool)arg3 ;
-(bool)legacySuppressOptionsBackground;
-(void)setDetail:(SCD_Struct_UI29*)arg1 ;
-(void)setIsTiled:(bool)arg1 leftCapWidth:(unsigned long long)arg2 rightCapWidth:(unsigned long long)arg3 ;
-(id)optionsBackgroundImage;
-(void)setOptionsBackgroundImage:(id)arg1 ;
@end

