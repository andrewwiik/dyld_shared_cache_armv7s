/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptCalloutView : SUScriptObject {

	bool _isVisible;
	NSString* _subtitle;
	NSString* _title;

}

@property (copy) NSString * subtitle; 
@property (copy) NSString * title; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void)setVisible:(bool)arg1 animated:(bool)arg2 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)_menuDidHideNotification:(id)arg1 ;
-(void)_reloadUntructedString;
-(void)_setupCalloutBar;
-(void)_resetCalloutBar;
-(void)setTargetX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4 ;
-(void)setTitle:(id)arg1 subtitle:(id)arg2 ;
@end
