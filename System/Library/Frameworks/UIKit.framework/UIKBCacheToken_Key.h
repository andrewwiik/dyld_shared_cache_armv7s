/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:15 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBCacheToken.h>

@class NSString;

@interface UIKBCacheToken_Key : UIKBCacheToken {

	SCD_Union_UI82 _style;
	NSString* _cacheDisplayString;
	int _displayTypeHint;
	int _displayRowHint;
	CGSize _size;
	int _state;
	int _clipCorners;
	bool _usesInsets;
	UIEdgeInsets _displayInsets;

}
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI30)arg2 ;
+(id)tokenForKey:(id)arg1 style:(SCD_Struct_UI30)arg2 displayInsets:(UIEdgeInsets)arg3 ;
-(void)dealloc;
-(CGSize)size;
-(id)string;
-(void)setSize:(CGSize)arg1 ;
-(bool)hasKey;
-(id)stringForRenderFlags:(long long)arg1 lightKeyboard:(bool)arg2 ;
-(int)rowHint;
-(void)setRowHint:(int)arg1 ;
-(int)displayHint;
-(void)setDisplayHint:(int)arg1 ;
-(id)_initWithKey:(id)arg1 style:(SCD_Struct_UI30)arg2 displayInsets:(UIEdgeInsets)arg3 ;
-(id)_stringWithAdditionalValues:(/*^block*/ id)arg1 ;
@end

