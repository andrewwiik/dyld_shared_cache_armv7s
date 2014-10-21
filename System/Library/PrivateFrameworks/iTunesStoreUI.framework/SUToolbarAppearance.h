/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableDictionary, UIColor;

@interface SUToolbarAppearance : NSObject <NSCopying> {

	NSMutableDictionary* _backgroundImages;
	NSMutableDictionary* _shadowImages;
	UIColor* _tintColor;

}

@property (nonatomic,retain) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
+(id)defaultToolbarAppearance;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)tintColor;
-(void)setTintColor:(id)arg1 ;
-(void)styleToolbar:(id)arg1 ;
-(void)setBackgroundImage:(id)arg1 forPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(void)enumerateBackgroundImagesUsingBlock:(/*^block*/ id)arg1 ;
-(void)enumerateShadowImagesUsingBlock:(/*^block*/ id)arg1 ;
-(id)backgroundImageForPosition:(long long)arg1 barMetrics:(long long)arg2 ;
-(void)setShadowImage:(id)arg1 forPosition:(long long)arg2 ;
-(id)shadowImageForPosition:(long long)arg1 ;
@end

