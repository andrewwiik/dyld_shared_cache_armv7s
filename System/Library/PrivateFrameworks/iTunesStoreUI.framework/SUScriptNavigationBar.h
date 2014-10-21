/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptNavigationItem, NSArray, SUScriptButton, NSString;

@interface SUScriptNavigationBar : SUScriptObject

@property (readonly) SUScriptNavigationItem * backNavigationItem; 
@property (assign) long long barStyle; 
@property (readonly) NSArray * navigationItems; 
@property (copy) id translucent; 
@property (readonly) SUScriptNavigationItem * topNavigationItem; 
@property (readonly) long long barStyleBlack; 
@property (readonly) long long barStyleDefault; 
@property (retain) SUScriptButton * leftButton; 
@property (retain) <SUScriptNavigationItem> * leftItem; 
@property (retain) NSString * prompt; 
@property (retain) SUScriptButton * rightButton; 
@property (retain) <SUScriptNavigationItem> * rightItem; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)rightButton;
-(void)setRightButton:(id)arg1 ;
-(id)init;
-(id)prompt;
-(void)setPrompt:(id)arg1 ;
-(id)navigationItems;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(void)setTranslucent:(id)arg1 ;
-(void)setNavigationItems:(id)arg1 ;
-(id)attributeKeys;
-(void)setLeftButton:(id)arg1 animated:(bool)arg2 ;
-(void)setRightButton:(id)arg1 animated:(bool)arg2 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)initWithNativeNavigationBar:(id)arg1 ;
-(id)_nativeNavigationBar;
-(void)tearDownUserInterface;
-(id)_topNavigationItem;
-(id)leftItem;
-(id)rightItem;
-(void)setLeftItem:(id)arg1 animated:(bool)arg2 ;
-(void)setRightItem:(id)arg1 animated:(bool)arg2 ;
-(id)_copyTopNavigationItem;
-(id)buttonWithTitle:(id)arg1 style:(id)arg2 target:(id)arg3 action:(id)arg4 ;
-(id)backNavigationItem;
-(void)setBackNavigationItem:(id)arg1 ;
-(void)setLeftItem:(id)arg1 ;
-(void)setRightItem:(id)arg1 ;
-(void)setTopNavigationItem:(id)arg1 ;
-(id)topNavigationItem;
-(id)translucent;
-(long long)barStyleBlack;
-(long long)barStyleDefault;
-(id)leftButton;
-(void)setLeftButton:(id)arg1 ;
@end

