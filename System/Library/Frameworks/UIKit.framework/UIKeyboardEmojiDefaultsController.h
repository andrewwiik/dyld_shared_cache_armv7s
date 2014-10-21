/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface UIKeyboardEmojiDefaultsController : NSObject {

	NSMutableDictionary* _defaults;

}
+(id)sharedController;
-(void)dealloc;
-(id)init;
-(long long)emojiCategoryDefaultsIndex:(id)arg1 ;
-(id)emptyDefaultsDictionary;
-(void)handleWrite:(id)arg1 ;
-(void)handleRead:(id)arg1 ;
-(void)writeEmojiDefaults;
-(void)readEmojiDefaults;
-(void)setEmojiCategoryDefaultsIndex:(long long)arg1 forCategory:(id)arg2 ;
-(void)setRecentsKey:(id)arg1 ;
-(id)recentsKey;
-(void)setUsageHistoryKey:(id)arg1 ;
-(id)usageHistoryKey;
-(void)setCurrentSequenceKey:(long long)arg1 ;
-(long long)currentSequenceKey;
-(void)setDefaultsValue:(id)arg1 forKey:(id)arg2 ;
-(id)defaultsValueForKey:(id)arg1 ;
@end

