/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:32 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class MPMediaItem;

@interface SUScriptMediaItem : SUScriptObject

@property (nonatomic,readonly) MPMediaItem * nativeItem; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)scriptMediaTypeForNativeMediaType:(unsigned long long)arg1 ;
+(id)copyScriptMediaTypesForNativeMediaTypes:(unsigned long long)arg1 ;
+(unsigned long long)nativeMediaTypesForScriptMediaTypes:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)_className;
-(id)imageURLWithWidth:(id)arg1 height:(id)arg2 ;
-(id)nativeItem;
@end

